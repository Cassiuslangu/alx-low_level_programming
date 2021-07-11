#include "holeberton.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number
 * @n: to return the factorial number
 * Return: factorial -1
 */

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
