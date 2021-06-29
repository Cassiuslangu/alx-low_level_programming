#include <stdio.h>

/**
 * 0-positive_or_negative
 * if the number is greater than 0: is positive\n
 * if the number is 0: is zero\n
 * if the number is less than 0: is negative\n
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

scanf("%d", &n);
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else if (n == 0)
printf("%d is zero\n", n);

return (0);
}
