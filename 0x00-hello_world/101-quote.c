#include <stdio.h>
/**
 * main - output a sentence
 *
 * Return: 1
 */
int main(void)
{
	char sentence[100];

	sentence[100] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\0";
	putchar(sentence);
	return (1);
}
