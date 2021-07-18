#include "holberton.h"
#include <stdio.h>

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: Number of of times the character \ should be printed
 * Return: Nothing
 */

void print_diagonal(int n)
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
			int j = 0;

			while (j < n)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');

				j++;
			}
			_putchar('\n');

			i++;

		}

	}
}