#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: bytes of @src to copy
 *
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
