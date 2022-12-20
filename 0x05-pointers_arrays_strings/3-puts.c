#include "main.h"

/**
 * _puts - prints string follow by a new line
 * @str: the string
 */

void _puts(char *str)
{
	int n = 0;
	int i;

	while (*str != '\0')
	{
		_putchar(*str);
	}
	_putchar('\n');
}
