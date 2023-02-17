#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int j;

	for (j = 0 ; j < 10 ; j++)
	{
		putchar(j + '0');
		if (j < 9)
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
