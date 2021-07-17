#include <stdio.h>

/**
 * main - Program that will print lower/upper case alphabets
 * Return: Always 0
 */

int main(void)
{
	char c;
	char C;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	for (C = 'A'; C <= 'Z'; ++C)
		putchar(C);
	putchar('\n');
	return (0);
}
