#include "include/crc32.h"

uint32_t crc32(const uint8_t* data, size_t len, uint32_t crc) {
    for (size_t i = 0; i < len; i++) {
        crc = crc32_step(crc, data[i]);
    }
    return crc ^ 0xFFFFFFFF;
}
