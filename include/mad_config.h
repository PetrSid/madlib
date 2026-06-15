#ifndef DEFAULT_H_
#define DEFAULT_H_

#define DEBUG 1

#define ARCH8_16 0xFFFF
#define ARCH32   0xFFFFFFFF

///ARCHITECURE///
#if UINTPTR_MAX <= ARCH8_16
    // 8_16-битная система
    #define LIMITED     512U
#elif UINTPTR_MAX <= ARCH32
    // 32-битная система
    #define LIMITED     100000000U
#else
    // 64-битная система
    #define LIMITED     1000000000ULL
#endif // End_Block

///ERROR///
#ifdef DEBUG
    #define LOG_ERR(msg) fprintf(stderr, "[Error]: %s\n", msg);
#else
    #define LOG_ERR(msg)
#endif

typedef enum {
    SUCCESS           = 0,
    ERR_NULL          = -1,
    ERR_MEMORY        = -5,
    ERR_LIMIT         = -10,
    ERR_OUT_OF_BOUNDS = -2
} status_t;

#endif //!DEFAULT_H_