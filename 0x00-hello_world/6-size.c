#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charType;
int intType;
float floatType;

printf("Size of a char: %c byte(s)\n", sizeof(charType));
printf("Size of an int: %i byte(s)\n", sizeof(intType));
printf("Size of a long int: %ld byte(s)\n", sizeof(intType));
printf("Size of a long long int: %lld byte(s)\n", sizeof(intType));
printf("Size of a float: %f byte(s)\n", sizeof(floatType));
return (0);
}
