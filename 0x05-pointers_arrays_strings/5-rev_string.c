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
		n++;
	}

	for (i = n; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
