#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
int n;

scanf("%i", &n);

if (n > 0)
printf("%i is positive", n);
else if (n < 0)
printf("%i is negative", n);
else if (n == 0)
printf("%i is zero", n);

return (0);
}