#include "main.h"

/**
 * _puts - prints string follow by a new line
 * @str: the string
 */

void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
