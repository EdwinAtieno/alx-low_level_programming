#include "main.h"
/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */
 
 
void print_diagonal(int n)
{
	int i, j;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			if ((n > 1) && (i > 1))
			{
				for (j = 1; j <= i - 1; j++)
				{
					_putchar(32);
				}
			}
			_putchar('\\');
			if (i != n)
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
}
