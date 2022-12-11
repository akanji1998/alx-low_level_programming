#include <stdio.h>

/**
 * main - print out the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	return (0);
}
