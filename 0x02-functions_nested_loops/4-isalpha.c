#include "main.h"
/**
 * _isalpha - detect if a caracter is alpha
 *
 * @c: the caracter check
 * Return: 1 if c is a letter,lowercas or uppercase, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
