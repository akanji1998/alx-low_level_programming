#include "main.h"

/**
 * swap_int - swap the value of integers
 * @a: the first integer
 * @b: the second integer
 */

void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
