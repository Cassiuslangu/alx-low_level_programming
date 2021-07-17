#include <stdio.h>

/**
 * main - Program that prints lowercase alphabet in reverses.
 * Return: Always 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
		putchar(c);
	putchar('\n');
	return (0);
}
