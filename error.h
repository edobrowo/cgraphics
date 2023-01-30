#ifndef ERROR
#define ERROR

typedef enum {
    SUCCESS = 0,
    ENOMEM,
    EBUFOV,
    ENOFILE,
    EWRITE,
} error_num_t;

// Returns friendly description of error code
const char* errstr(error_num_t err);

#endif // ERROR
