#include "main.h"

/**
 * reverse_array - reverse the content of an array of intergers
 * @a: pointer to int array
 * @n: the number of element in the array
 */

void reverse_array(int *a, int n)
{
	int temp, s, e;

	s = 0;
	e = n - 1;

	while (s < e)
	{
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
	}
}
