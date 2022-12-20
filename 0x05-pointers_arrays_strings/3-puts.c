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
		n++;
	}

	char string[n];

	for (i = 0; i <= n; i++)
	{
		string[i] = *str;
	}

	puts(string);
}
