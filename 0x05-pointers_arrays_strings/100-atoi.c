#include "main.h"

/**
 * _atoi - convert a string to an interger
 * @s: the pointer to convert
 * Return: a interger
 */

int _atoi(char *c)
{
	int c = 0;
	unsigned int n = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			n = (n * 10) + (s[c] - '0');
			c++;
		}

		if (isi == 1)
		{
			break;
		}

		c++;
	}
	n *= min;
	return (n);
}
