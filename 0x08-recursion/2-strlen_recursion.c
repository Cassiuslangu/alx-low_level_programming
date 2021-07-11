#include "holberton.h"
#include <stdio.h>

/**
 * strlen_recursion -returns the lenght of a string
 * @s: output of the length of a string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
if(*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
