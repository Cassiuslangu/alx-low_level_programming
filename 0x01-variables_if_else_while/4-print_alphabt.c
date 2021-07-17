#include <stdio.h>

/**
 * main - Program that will print lowercase alphabet exc q and e.
 * Return: Always 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
