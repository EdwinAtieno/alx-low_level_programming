#include "holberton.h"
/**
 * main -  prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *ch = "Holberton";

	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar('\n');

	return (0);
}

