#include "main.h"

/**
 * _strlen - return the lenght of a string
 * @s: the pointer of the string
 * Return: the lenght of *s
 */

int _strlen(char *s)
{

	int len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
