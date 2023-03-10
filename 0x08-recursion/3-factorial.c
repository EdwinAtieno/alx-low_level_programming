#include "main.h"

/**
 * factorial - youtube c tutorial: 5 - (5 - 1)
 * @n: input
 * Return: Always 0 (Success)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
