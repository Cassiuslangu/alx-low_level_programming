#include <stdio.h>

/**
 * main - Program that will print lowercase alphabets.
 * Return: Always 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	putchar('\n');
	return (0);
}