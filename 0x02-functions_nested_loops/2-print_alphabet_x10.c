#include "main.h"

/**
 * main - print_alphabet_x10.c
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)

{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
