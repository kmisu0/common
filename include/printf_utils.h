/**
 * @file printf_utils.h
 * @brief Helper functions for printing in console.
 *
 * This header provides reusable utilities for console printing across
 * multiple projects. Currently includes functions for printing
 * centered headers with custom filling characters.
 * 
 * @note Portable across C projects.
 */

#ifndef PRINTF_UTILS_H
#define PRINTF_UTILS_H

#include <stdio.h>

/**
 * @brief Prints a centered header line with a filling character.
 * 
 * Prepares a header line by centering the provided buffer string
 * within a row of given width. The remaining space is filled with
 * the specified character.
 * 
 * @param buffer      The string to be printed in the header (null-terminated).
 * @param rowWidth    Total width of the row in characters.
 * @param fillingChar Character used to fill the remaining space around the buffer.
 * 
 * @return int        Returns 0 on success, -1 if the buffer is too long
 *                    or rowWidth is less than 2 (not enough space for buffer + padding).
 */
int printHeader(const char *buffer, size_t rowWidth, const char fillingChar);

#endif // PRINTF_UTILS_H