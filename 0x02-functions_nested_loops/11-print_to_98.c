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
			if (n / 10)
				_putchar(n / 10);

			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	else if (n == 98)
	{
		if (n / 10)
			_putchar(n / 10);

		_putchar((n % 10) + '0');
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		while (n < 98)
		{
			_putchar('-');
			n = -n;
			if ( n / 10)
				_putchar(n / 10);

			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
}
