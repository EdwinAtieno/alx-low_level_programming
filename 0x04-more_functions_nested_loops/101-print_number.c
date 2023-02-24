#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	int digits = 1;
	int divisor = 1;
	int i;
	int is_negative = 0;

	if (n < 0)
	{
		is_negative = 1;
		n *= -1;
	}
	while ((n / divisor) >= 10)
	{
		digits++;
		divisor *= 10;
	}
	if (is_negative)
	{
		_putchar('-');
	}
	for (i = 0; i < digits; i++)
	{
		_putchar(((n / divisor) % 10) + '0');
		divisor /= 10;
	}
	_putchar((n % 10) + '0');
}
