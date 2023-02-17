#include <stdio.h>

/**
 * main - alphabets in both caps and small
 *
 *
 * Return: Always 0
 */

int main(void)
{
	char j;

	for (j = 'k' ; j <= 'l' ; j++)
	{
		putchar(j);

	}

	for (j = 'K' ; j <= 'L' ; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
