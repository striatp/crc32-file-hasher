#ifndef CRC32_H
#define CRC32_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

uint32_t crc32(const uint8_t* data, size_t len, uint32_t crc);

extern uint32_t crc32_step(uint32_t crc, uint8_t byte);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // CRC32_H
