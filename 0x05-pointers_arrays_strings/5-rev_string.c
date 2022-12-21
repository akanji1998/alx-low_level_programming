#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string to reverse
 */

void rev_string(char *s)
{
	int n = 0;
	int i;

	while (s[n] != '\0')
	{
		_putchar(s[n]);
		n++;
	}
	_putchar('\n');

	while (n != 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
