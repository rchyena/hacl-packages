# CFG Boosting Example - Cryspen HACL HMAC Routines

> [!NOTE]
> See the README.orig.md file in this directory to read the original file describing the Cryspen HACL Packages project.

This branch uses the Cryspen HACL Packages repository (https://github.com/cryspen/hacl-packages) as a target for CFG boosting.
Specifically, we manually instrumented the routines in `src/Hacl_HMAC.c` to include a unique assembly preamble bit pattern as a preamble to each basic block (in source).
We limited our modifications to code within `src/Hacl_HMAC.c`.
Functions called from within this file remain unmodified.

Since instrumentation at the IR-level would facilitate an automated approach, we also took care to investigate the preprocessed version of src/Hacl_HMAC.c to ensure we didn't miss any (consequential) basic blocks hidden within macros.
Our investigation validated that no such basic blocks exist in the target source file.
You can verify our findings by looking at either the preprocessed source file (`make Hacl_HMAC.pp.c`) or src/Hacl_HMAC.ppsource.c which stores our instrumentation of the preprocessed source file.

## Building

The code should build without error using the following steps.

```
$ make
cc -O2 -I . -I include -I karamel/include -I karamel/krmllib/dist/minimal src/Hacl_HMAC.c driver.c src/Hacl_Hash_SHA2.c src/Hacl_Hash_SHA1.c src/Hacl_Hash_Blake2s.c src/Hacl_Hash_Blake2b.c src/Lib_Memzero0.c -o orig
cc -O2 -I . -I include -I karamel/include -I karamel/krmllib/dist/minimal src/Hacl_HMAC.srcboost.c driver.c cfgboost.h src/Hacl_Hash_SHA2.c src/Hacl_Hash_SHA1.c src/Hacl_Hash_Blake2s.c src/Hacl_Hash_Blake2b.c src/Lib_Memzero0.c -o srcboost
cc -O2 -I . -I include -I karamel/include -I karamel/krmllib/dist/minimal src/Hacl_HMAC.ppboost.c driver.c cfgboost.h src/Hacl_Hash_SHA2.c src/Hacl_Hash_SHA1.c src/Hacl_Hash_Blake2s.c src/Hacl_Hash_Blake2b.c src/Lib_Memzero0.c -o ppboost
```

## Running

We also include a driver to facilitate dynamic studies of boosting effects.
The resulting executables are command-line tools that compute a hash of data read from standard input.
If you launch the tool without parameters, they will print usage information.

```
$ ./srcboost 
Usage: ./srcboost [HASH_ALG] [length]

Parameters:
  HASH_ALG  Name of the hash algorithm
             sha1|sha2_256|sha2_384|sha2_512|blake2s|blake2b

  length    Number of data bytes to read from STDIN

```

For example, use the following command to compute an HMAC SHA1 hash of a 128 byte length zero buffer.

```
$ cat /dev/zero | ./srcboost sha1 128
Hash:0503eec74a215fd90b5e613930bbeacd891ae163
```

The execution above will include a boosting signal in assembly at the beginning of each source basic block.
Use the `./orig` binary to run dynamic experiments against an unmodified code for comparison.

## Customizing the Instrumentation

If you would like to customize the assembly preamble generated for each basic block, modify the `mkboost.py` file.
That script is used to generate `cfgboost.h` which is ultimately responsible for generating the basic block assembly preamble.
Specifically, the `bit0` and `bit1` lists should hold the sequence of valid assembly instructions used to signify either a 0 or 1 bit, respectively.
Issuing a `make` command after modification should generate executibles with the updated basic block preamble patterns.
