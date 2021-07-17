#include "holberton.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number.
 * @n: int to extract the last digit
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int negate = -1;
	int a;

	if (n < 0)
		n = n * negate;

	a = n % 10;

	if (a < 0)
		a = a * negate;

	_putchar(a + '0');

	return (a);
}
