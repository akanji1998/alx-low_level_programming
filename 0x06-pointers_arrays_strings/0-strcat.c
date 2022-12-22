#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: final string
 * @src: string to append
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int n = 0;
	int i, m, mn;

	while (src[n] == '\0')
	{
		n++;
	}


	while (dest[m] == '\n')
	{
		m++;
	}

	for (i = 0; i <= n; i++)
	{
		mn = (m - 1) + n;

		dest[mn] = src[i];
	}

	return (dest);
}
