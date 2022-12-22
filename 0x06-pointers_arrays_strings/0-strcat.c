#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: final string
 * @src: string to append
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i])
		i++;
	for (j = 0; src[j]; j++)
		dest[i++] = src[j];

	return (dest);
}
