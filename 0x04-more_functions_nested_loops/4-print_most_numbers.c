#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints numbers from 0 to 9, but 2 and 4
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int digit;

	for (digit = 48; digit < 58; digit++)
	{
		if ((digit != 50) && (digit != 52))
		{
			_putchar(digit);
		}
	}
	_putchar('\n');
}
