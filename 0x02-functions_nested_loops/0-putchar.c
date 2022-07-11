#include "main.h"

/**
 * main - A program that prints _putchar, followed by a new line.
 * Return: always 0 (Success)
 */

int main(void)
{
	char putch[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int c;

	for (c = 0; c < 8; c+)
	{
	_putchar(putch[c]);
	}
	_putchar('\n');

	return (0);
}
