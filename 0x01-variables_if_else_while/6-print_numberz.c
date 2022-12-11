#include <stdio.h>

/**
 * main - print out number from 0 to 9
 *
 * Return: 0
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
		putchar((number % 10) + '0');
	putchar('\n');
	return (0);
}
