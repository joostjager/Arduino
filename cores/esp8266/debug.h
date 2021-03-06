#ifndef ARD_DEBUG_H
#define ARD_DEBUG_H

#include <stddef.h>
#include <stdint.h>

#define DEBUGV(...) ets_printf(__VA_ARGS__)

#ifndef DEBUGV
#define DEBUGV(...)
#endif

#ifdef __cplusplus
void hexdump(uint8_t *mem, uint32_t len, uint8_t cols = 16);
#else
void hexdump(uint8_t *mem, uint32_t len, uint8_t cols);
#endif

#ifdef __cplusplus
extern "C" {
#endif

void __panic_func(const char* file, int line, const char* func) __attribute__((noreturn));
#define panic() __panic_func(__FILE__, __LINE__, __func__)

#ifdef __cplusplus
}
#endif


#endif//ARD_DEBUG_H
