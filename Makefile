TARGETS=orig asmboost
C_FLAGS=-O2 -I . -I include -I karamel/include -I karamel/krmllib/dist/minimal
SOURCE_DEPS=src/Hacl_Hash_SHA2.c src/Hacl_Hash_SHA1.c src/Hacl_Hash_Blake2s.c src/Hacl_Hash_Blake2b.c src/Lib_Memzero0.c

.PHONY=all test clean

all: ${TARGETS}

orig: src/Hacl_HMAC.c driver.c
	${CC} ${C_FLAGS} $^ ${SOURCE_DEPS} -o $@

asmboost: Hacl_HMAC.boosted.s driver.c
	${CC} ${C_FLAGS} $^ ${SOURCE_DEPS} -o $@

Hacl_HMAC.boosted.s: Hacl_HMAC.s mkboost.py
	cat $< | python3 mkboost.py > $@

Hacl_HMAC.s: src/Hacl_HMAC.c
	${CC} -S ${C_FLAGS} $<

test: all
	@echo -n "     Original sha1 "
	@cat /dev/zero | ./orig sha1 4096
	@echo -n "    Src Boost sha1 "
	@cat /dev/zero | ./asmboost sha1 4096

	@echo -n " Original sha2_256 "
	@cat /dev/zero | ./orig sha2_256 4096
	@echo -n "Src Boost sha2_256 "
	@cat /dev/zero | ./asmboost sha2_256 4096

	@echo -n " Original sha2_384 "
	@cat /dev/zero | ./orig sha2_384 4096
	@echo -n "Src Boost sha2_384 "
	@cat /dev/zero | ./asmboost sha2_384 4096

	@echo -n " Original sha2_512 "
	@cat /dev/zero | ./orig sha2_512 4096
	@echo -n "Src Boost sha2_512 "
	@cat /dev/zero | ./asmboost sha2_512 4096

	@echo -n "  Original blake2s "
	@cat /dev/zero | ./orig blake2s 4096
	@echo -n " Src Boost blake2s "
	@cat /dev/zero | ./asmboost blake2s 4096

	@echo -n "  Original blake2b "
	@cat /dev/zero | ./orig blake2b 4096
	@echo -n " Src Boost blake2b "
	@cat /dev/zero | ./asmboost blake2b 4096

clean:
	rm -f ${TARGETS} Hacl_HMAC.s Hacl_HMAC.boosted.s
