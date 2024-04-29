TARGETS=orig srcboost ppboost
C_FLAGS=-O2 -I . -I include -I karamel/include -I karamel/krmllib/dist/minimal
SOURCE_DEPS=src/Hacl_Hash_SHA2.c src/Hacl_Hash_SHA1.c src/Hacl_Hash_Blake2s.c src/Hacl_Hash_Blake2b.c src/Lib_Memzero0.c

.PHONY=all test clean

all: ${TARGETS}

orig: src/Hacl_HMAC.c driver.c
	${CC} ${C_FLAGS} $^ ${SOURCE_DEPS} -o $@

srcboost: src/Hacl_HMAC.srcboost.c driver.c cfgboost.h
	${CC} ${C_FLAGS} $^ ${SOURCE_DEPS} -o $@

ppboost: src/Hacl_HMAC.ppboost.c driver.c cfgboost.h
	${CC} ${C_FLAGS} $^ ${SOURCE_DEPS} -o $@

cfgboost.h: mkboost.py
	python3 $< > $@

Hacl_HMAC.pp.c: src/Hacl_HMAC.c
	${CC} -E ${C_FLAGS} $^ -o $@

test: all
	@echo -n "     Original sha1 "
	@cat /dev/zero | ./orig sha1 4096
	@echo -n "    Src Boost sha1 "
	@cat /dev/zero | ./srcboost sha1 4096
	@echo -n "     PP Boost sha1 "
	@cat /dev/zero | ./ppboost sha1 4096

	@echo -n " Original sha2_256 "
	@cat /dev/zero | ./orig sha2_256 4096
	@echo -n "Src Boost sha2_256 "
	@cat /dev/zero | ./srcboost sha2_256 4096
	@echo -n " PP Boost sha2_256 "
	@cat /dev/zero | ./ppboost sha2_256 4096

	@echo -n " Original sha2_384 "
	@cat /dev/zero | ./orig sha2_384 4096
	@echo -n "Src Boost sha2_384 "
	@cat /dev/zero | ./srcboost sha2_384 4096
	@echo -n " PP Boost sha2_384 "
	@cat /dev/zero | ./ppboost sha2_384 4096

	@echo -n " Original sha2_512 "
	@cat /dev/zero | ./orig sha2_512 4096
	@echo -n "Src Boost sha2_512 "
	@cat /dev/zero | ./srcboost sha2_512 4096
	@echo -n " PP Boost sha2_512 "
	@cat /dev/zero | ./ppboost sha2_512 4096

	@echo -n "  Original blake2s "
	@cat /dev/zero | ./orig blake2s 4096
	@echo -n " Src Boost blake2s "
	@cat /dev/zero | ./srcboost blake2s 4096
	@echo -n "  PP Boost blake2s "
	@cat /dev/zero | ./ppboost blake2s 4096

	@echo -n "  Original blake2b "
	@cat /dev/zero | ./orig blake2b 4096
	@echo -n " Src Boost blake2b "
	@cat /dev/zero | ./srcboost blake2b 4096
	@echo -n "  PP Boost blake2b "
	@cat /dev/zero | ./ppboost blake2b 4096

clean:
	rm -f ${TARGETS} cfgboost.h Hacl_HMAC.pp.c
