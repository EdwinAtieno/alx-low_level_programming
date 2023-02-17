#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	int j;

	for (j = 0 ; j < 16 ; j++)
	{
		if (j < 10)
		{
			putchar('0' + j);
		}
		else
		{
			putchar(87 + j);
		}
	}
	putchar('\n');
	return (0);
}
