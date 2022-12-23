#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: string to compare
 * @s2: against string to compare
 *
 * Return: 0 if s1 and s2 are equal, else negative or positive integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, r;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
		else
		{
			r = s1[i] - s2[i];
		}
		i++;
	}

	return (r);
}
