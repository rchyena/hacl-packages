#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "Hacl_HMAC.h"

void usage(const char* argv0)
{
    fprintf(stdout,
            "Usage: %s [HASH_ALG] [length]\n"
            "\n"
            "Parameters:\n"
            "  HASH_ALG  Name of the hash algorithm\n"
            "             sha1|sha2_256|sha2_384|sha2_512|blake2s|blake2b\n"
            "\n"
            "  length    Number of data bytes to read from STDIN\n"
            "\n", argv0);
}

int main(int argc, char* argv[])
{
    uint8_t dst[128] = {0};
    uint8_t key[] = "COOP FTW!";
    uint32_t key_len = 9;
    uint8_t *data;
    uint32_t data_len;
    size_t ret;

    if (argc < 3) {
        usage(argv[0]);
        return -2;
    }

    data_len = strtol(argv[2], NULL, 0);
    data = malloc(sizeof(*data) * data_len);
    if (!data) {
        fprintf(stderr, "Error: Could not allocate buffer of size %s\n", argv[2]); 
        return -1;
    }

    ret = fread(data, sizeof(*data), data_len, stdin);
    if (ret < data_len) {
        fprintf(stderr, "Error: fread() returned %d\n", ret);
        return -1;
    }
    else if (strcmp("sha1", argv[1]) == 0) {
        Hacl_HMAC_compute_sha1(dst, key, key_len, data, data_len);
    }
    else if (strcmp("sha2_256", argv[1]) == 0) {
        Hacl_HMAC_compute_sha2_256(dst, key, key_len, data, data_len);
    }
    else if (strcmp("sha2_384", argv[1]) == 0) {
        Hacl_HMAC_compute_sha2_384(dst, key, key_len, data, data_len);
    }
    else if (strcmp("sha2_512", argv[1]) == 0) {
        Hacl_HMAC_compute_sha2_512(dst, key, key_len, data, data_len);
    }
    else if (strcmp("blake2s", argv[1]) == 0) {
        Hacl_HMAC_compute_blake2s_32(dst, key, key_len, data, data_len);
    }
    else if (strcmp("blake2b", argv[1]) == 0) {
        Hacl_HMAC_compute_blake2b_32(dst, key, key_len, data, data_len);
    }
    else {
        fprintf(stdout, "Error: Unknown hash algorithm: %s\n", argv[1]);
        return -2;
    }

    fprintf(stdout, "Hash:");
    for (uint8_t* ptr = dst; *ptr; ++ptr)
        fprintf(stdout, "%02x", *ptr);
    fprintf(stdout, "\n");
    
    return 0;
}
