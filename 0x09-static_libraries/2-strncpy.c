#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination of the copied string
 * @src: source string
 * @n: size of character to be copied
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i; /*size of index*/

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
