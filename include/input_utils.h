// input_utils.h - helper for safe stdin input
// provides safeFgets() to read a line and discard overflow characters
// portable and reusable across multiple projects

#ifndef INPUT_UTILS_H
#define INPUT_UTILS_H

#include <stddef.h>

int safeFgets(char *buffer, size_t size);

#endif