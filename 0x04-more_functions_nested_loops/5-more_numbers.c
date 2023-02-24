#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 * _putchar only 3
 * Return: no return
 */
void more_numbers(void)
{
	int row, column;

	for (row = 1; row <= 10; row++)
	{
		for (column = 0; column <= 14; column++)
		{
			if (column / 10 != 0)
			{
				_putchar('0' + column / 10);
			}
			_putchar('0' + column % 10);
		}
		_putchar('\n');
	}
}
