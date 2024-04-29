# CFG Boosting Example - Cryspen HACL HMAC Routines

> [!NOTE]
> See the README.orig.md file in this directory to read the original file describing the Cryspen HACL Packages project.

This branch uses the Cryspen HACL Packages repository (https://github.com/cryspen/hacl-packages) as a target for CFG boosting.
Specifically, we manually instrumented the routines in `src/Hacl_HMAC.c` to include a unique assembly preamble bit pattern as a preamble to each basic block (in source).
We limited our modifications to code within `src/Hacl_HMAC.c`.
Functions called from within this file remain unmodified.

## Building

The code should build without error using the following steps.

```
$ make
cc -O2 -I . -I include -I karamel/include -I karamel/krmllib/dist/minimal src/Hacl_HMAC.c driver.c src/Hacl_Hash_SHA2.c src/Hacl_Hash_SHA1.c src/Hacl_Hash_Blake2s.c src/Hacl_Hash_Blake2b.c src/Lib_Memzero0.c -o orig
cc -S -O2 -I . -I include -I karamel/include -I karamel/krmllib/dist/minimal src/Hacl_HMAC.c
cat Hacl_HMAC.s | python3 mkboost.py > Hacl_HMAC.boosted.s
cc -O2 -I . -I include -I karamel/include -I karamel/krmllib/dist/minimal Hacl_HMAC.boosted.s driver.c src/Hacl_Hash_SHA2.c src/Hacl_Hash_SHA1.c src/Hacl_Hash_Blake2s.c src/Hacl_Hash_Blake2b.c src/Lib_Memzero0.c -o asmboost
```

## Running

We also include a driver to facilitate dynamic studies of boosting effects.
The resulting executables are command-line tools that compute a hash of data read from standard input.
If you launch the tool without parameters, they will print usage information.

```
$ ./asmboost
Usage: ./asmboost [HASH_ALG] [length]

Parameters:
  HASH_ALG  Name of the hash algorithm
             sha1|sha2_256|sha2_384|sha2_512|blake2s|blake2b

  length    Number of data bytes to read from STDIN

```

For example, use the following command to compute an HMAC SHA1 hash of a 128 byte length zero buffer.

```
$ cat /dev/zero | ./asmboost sha1 128
Hash:0503eec74a215fd90b5e613930bbeacd891ae163
```

The execution above will include a boosting signal in assembly at the beginning of each source basic block.
Use the `./orig` binary to run dynamic experiments against an unmodified code for comparison.

## Customizing the Instrumentation

If you would like to customize the assembly preamble generated for each basic block, modify the `mkboost.py` file.
That script will insert the appropriate assembly preamble before the basic blocks it detects.
Specifically, the `bit0` and `bit1` lists should hold the sequence of valid assembly instructions for signifying either a 0 or 1 bit, respectively.
Issuing `make` after modification should generate a new `asmboost` program with the updated basic block preamble patterns.

## Testing

You can use `make test` to verify that `asmboost` does not violate correctness properties of the original code.
For instance, if we use a 2-byte nop (i.e., "xchg %ax,%ax") as a boosting signal, no differences will be detected when running a test.

```
$ make test
     Original sha1 Hash:11d3b3a82660cf071e40796f8c0b2049d6de64cd
    Src Boost sha1 Hash:11d3b3a82660cf071e40796f8c0b2049d6de64cd
 Original sha2_256 Hash:4e479a90932f447db5f998bfeb9e703ab65833b56deac623e2d5fbd83376c439
Src Boost sha2_256 Hash:4e479a90932f447db5f998bfeb9e703ab65833b56deac623e2d5fbd83376c439
 Original sha2_384 Hash:86c959c1ae098069225c38781b0acd86ddef0510f662e063c74813a2bcf6d2c2543dd4f613a54ebb60af6c7b7c7c2585
Src Boost sha2_384 Hash:86c959c1ae098069225c38781b0acd86ddef0510f662e063c74813a2bcf6d2c2543dd4f613a54ebb60af6c7b7c7c2585
 Original sha2_512 Hash:9fff6fbef99f3d144b3afb5f5041ed2d7c8c6f33bb507805c82bfbd84cf1b1dd8e4d7fc7df15149219d601a0cb794d1935f63c19f428c6ac675a0b376718da8f
Src Boost sha2_512 Hash:9fff6fbef99f3d144b3afb5f5041ed2d7c8c6f33bb507805c82bfbd84cf1b1dd8e4d7fc7df15149219d601a0cb794d1935f63c19f428c6ac675a0b376718da8f
  Original blake2s Hash:f387e8299ad805fc8b7a
 Src Boost blake2s Hash:f387e8299ad805fc8b7a
  Original blake2b Hash:f6bea184a0d8315414672d08842ce815e7d1c92d169ed308a02ec404dd4f4f3c231d3476a2efe1cc37798bdd07104744a482915e54370102632b9aa1
 Src Boost blake2b Hash:f6bea184a0d8315414672d08842ce815e7d1c92d169ed308a02ec404dd4f4f3c231d3476a2efe1cc37798bdd07104744a482915e54370102632b9aa1
```

However, if we use "mulb 0x1" as a boosting signal, that instruction modifies the flags register, ultimately affecting code correctness.
This correctness modifying change may be observed using `make test`.

```
$ make test
     Original sha1 Hash:11d3b3a82660cf071e40796f8c0b2049d6de64cd
    Src Boost sha1 make: *** [Makefile:25: test] Error 139
```
