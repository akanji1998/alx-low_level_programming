#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: the caracter to check
 * Return: 1 if @c is lowercase, othwise 0
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
