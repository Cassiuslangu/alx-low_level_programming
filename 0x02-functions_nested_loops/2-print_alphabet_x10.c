#include "holberton.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase.
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c  = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
