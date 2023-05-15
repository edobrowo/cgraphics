#include "error.h"

const char* err_print(error_num_t err) {
    switch (err) {
        case SUCCESS: return "Operation successful.";
        case ENOMEM:  return "Could not allocate memory.";
        case EBUFOV:  return "Buffer overflow.";
        case ENOFILE: return "Could not open file.";
        case EWRITE:  return "Could not write to file.";
        default:      return "Unknown error.";
    }
}
