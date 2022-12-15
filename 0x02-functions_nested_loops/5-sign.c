#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n the character to print
 * Return: 1 if @n is greater than zero,
 * 0if its equal to zero and -1 if its less than zero
 */
int print_sign(int n)
{
	if(n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if ( n > 0)
	{
		_putchar('+');
		return(1);
	}
	else {
		_putchar('0');
		return (0);
	}
}


