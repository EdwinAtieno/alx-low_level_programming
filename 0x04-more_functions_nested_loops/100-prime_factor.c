#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num = 612852475143;
	long int factor = 2;
	long int largest = 1;

	while (num > 1)
	{
	if (num % factor == 0)
	{
		largest = factor;
		num /= factor;
		while (num % factor == 0)
		{
			num /= factor;
		}
	}
	factor++;
	}

	printf("%ld\n", largest);

	return (0);
}
