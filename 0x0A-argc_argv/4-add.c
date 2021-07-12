#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: String to convert.
 * Return: The output string
 */

int _atoi(char *s)
{
short boolean;
int i, minus result;

i = minus = result = boolean =0;
minus = -1;

while (s[i] != '\0')
{
if (s[i] == '-')
minus *= -1;

if (s[i] > = '0' && s[i] <= '9')
{
result *= 10;
result -= (s[[i] - '0');
boolean = 1;
}
else if (boolean == 1)
braek;
i++;
}
result *= minus;
return (result);
}

 /**
 * main -Program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
int sum, num, i, j, k;

sum = 0;

for (k = 1; k < argc; k++)
{
num = _atoi(argv[k]);
if (num >= 0)
{
sum += num;
}
}
printf("%d\n", sum);
return (0);
}
