#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a line
 * @n: Determines how long the line will be
 * Return: no return
 */
void print_line(int n)
{
	int i;

	if (n < 1)
	{

		_putchar('\n');

	}
	else
	{

		for (i = 1; i <= n; i++)
		{

			_putchar('_');
		}
		_putchar('\n');
	}
}
