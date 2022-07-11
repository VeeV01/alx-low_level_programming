#include "main.h"

/**
 * print_alphabet - A program that prints the alphabet, in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	_putchar(k);
	_putchar('\n');

	return (0);
}
