#include <stdio.h>

/**
 * main - Program will print all the numbers of base 16.
 * Return: Always 0
 */

int main(void)
{
	int n;
	char c;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
