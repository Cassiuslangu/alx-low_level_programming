#include "holberton.h"
#include <stdio.h>

/**
 * _print_rev_recursion -print a string in reverse
 * @s: string to print
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_print_rev_recursion(s + 1);
}
}
