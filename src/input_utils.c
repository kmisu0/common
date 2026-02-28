// safeFgets: reads a line from stdin safely
// discards extra characters if input exceeds buffer size
// returns 1 on success, 0 on EOF or input overflow
// reusable across projects

#include <stdio.h>
#include <string.h>

#include "..\include\input_utils.h"

int safeFgets(char *buffer, size_t size)
{
    int trash;

    if (fgets(buffer, size, stdin) != NULL)
    {
        if (strchr(buffer, (int)'\n') == NULL)
        {
            while ((trash = getchar()) != '\n' && trash != EOF)
                ; //discard extra characters
            return 0; // input too long, invalid reading
        }
        return 1; // success
    }
    return 0; // EOF or error
}