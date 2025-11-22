#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "include/crc32.h"

#define BUFFER_SIZE 4096

int main(int argc, char** argv) {
    if (argc < 3) {
        fprintf(stderr, "Usage: %s [--file/-f] <path>\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "--file") != 0 && strcmp(argv[1], "-f") != 0) {
        fprintf(stderr, "Unknown argument: %s\n", argv[1]);
        return 1;
    }

    FILE* f = fopen(argv[2], "rb");
    if (!f) {
        perror("fopen");
        return 1;
    }

    uint8_t buffer[BUFFER_SIZE];
    size_t read;
    uint32_t crc = 0xFFFFFFFF;

    while ((read = fread(buffer, 1, BUFFER_SIZE, f)) > 0) {
        crc = crc32(buffer, read, crc);
    }

    fclose(f);
    printf("0x%08X\n", crc);
    return 0;
}
