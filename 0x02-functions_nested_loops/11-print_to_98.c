#include "main.h"
/**
 * print_to_98 - print out natural number from a number to 98
 * @n: the number
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	else
	{
		while (n < 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
}
