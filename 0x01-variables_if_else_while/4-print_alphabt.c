#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 *
 * Return: Always 0
 */

int main(void)
{
	char j;

	for (j = 'a' ; j <= 'z' ; j++)
	{
		if ((j == 'q' || j == 'e') != 1)
		{
			putchar(j);
		}

	}
	putchar('\n');
	return (0);
}
