#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	int j;

	for (j = 0 ; j < 10 ; j++)
	{
		printf("%d", j);
	}
	putchar('\n');
	return (0);
}

