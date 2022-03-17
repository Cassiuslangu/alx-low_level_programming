#include "main.h"
#include <stdio.h>

/**
 * print_line - Draws a straight line in the terminal.
 * @n: Number of int to print.
 * Return: Always 0
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		while (i < n)
		{
			_putchar('_');
			i++;
		}

		_putchar('\n');

	}
}
