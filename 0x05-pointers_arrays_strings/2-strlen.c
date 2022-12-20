#include "main.h"

/**
 * _strlen - return the lenght of a string
 * @s: the pointer of the string
 * Return: the lenght of *s
 */

int _strlen(char *s)
{
	char string[] = *s;
	int len = strlen(string);

	return (len);
}
