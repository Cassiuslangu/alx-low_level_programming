#include <stdlib.h>
#include "holberton.h"

/**
 * *malloc_checked - allocates memory
 * @b: number of bytes to allocate
 * Return: A pointer
 */

void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);

if (ptr == NULL)
exit(98);

return (ptr);
}
