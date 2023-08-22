#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *arr;
    int i;
    void *filler = ptr;

    if (new_size > old_size)
    {

        arr = malloc((new_size - old_size) + 1);
    }
    if (new_size == old_size)
    {
        return (ptr);
    }

    if (ptr == NULL)
    {
        arr = malloc(new_size);
    }
    if ((new_size == 0) && (ptr != NULL))
    {
        free(ptr);
        return (NULL);
    }

    for (i = 0; filler != '\0'; i++)
    {
        arr = ptr;
    }

    free(ptr);
    return (arr);
    free(arr);
}
