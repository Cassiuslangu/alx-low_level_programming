#include "holeberton.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - returns the antural square root of a number.
 * @n: prints the square root of number
 * Return: Square root
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (n * _sqrt_recursion(n - 1));
}
