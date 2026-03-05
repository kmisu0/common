/**
 * @brief Prints a centered header line with a filling character.
 * 
 * This function prepares a header line by centering the provided buffer string
 * within a row of given width. The remaining space is filled with a specified
 * character. The resulting line is stored in a local buffer.
 * 
 * @param buffer      The string to be printed in the header (null-terminated).
 * @param rowWidth    Total width of the row in characters.
 * @param fillingChar Character used to fill the remaining space around the buffer.
 * 
 * @return int        Returns 0 on success, -1 if the buffer is too long
 *                    or rowWidth is less than 2 (not enough space for buffer + padding).
 * 
 * @note The function does not print to console; it prepares the message internally.
 *       If printing is desired, use printf("%s\n", message) after preparing it.
 */

#include <stdio.h>
#include <string.h>

#include "..\include\printf_utils.h"

int printHeader(const char *buffer, size_t rowWidth, const char fillingChar)
{    
    // Check whether the row width is sufficient for buffer and padding
    if (strlen(buffer) > rowWidth - (size_t)2 || rowWidth < (size_t)2)
        return -1;
    ;    
    char message[rowWidth + 1];

    // Fill the whole string with filling characters and add null terminator at the end
    memset(message, fillingChar, rowWidth);
    message[rowWidth] = '\0';

    size_t bufferLen = strlen(buffer);
    size_t leftSpace = ((rowWidth - bufferLen) / 2);

    // Add space characters and copy the text to be printed
    message[leftSpace - 1] = ' ';
    memcpy(message + leftSpace, buffer, bufferLen);
    message[leftSpace + bufferLen] = ' ';

    printf("%s", message);
    
    return 0;
}