#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area to by s
 * with the constant byte b
 * @s: the memory area
 * @b: the constant b
 * @n: the number of fills
 *
 * Return: memory area pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;

	while (i <= n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
