#include "main.h"

/**
 * _isdigit - check if caracter is digit (0 through 9)
 * @c: The caracter
 * Return: 1 if c is a digit, otherwise 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
