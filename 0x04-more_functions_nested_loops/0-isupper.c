#include "main.h"

/**
 * _isupper - check if a character is UPPERCASE
 *
 * @c: the caracter
 * Return: 1 is @c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		_putchar(c);
		return (1);
	}
	else
	{
		_putchar(c);
		return (0);
	}
}
