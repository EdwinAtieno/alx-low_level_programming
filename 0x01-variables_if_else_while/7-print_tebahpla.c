#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * followed by a new line
 *
 *
 * Return: Always 0
 */

int main(void)
{
	char j;

	for (j = 'z' ; j >= 'a' ; j--)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
