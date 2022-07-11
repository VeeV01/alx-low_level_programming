#include "main.h"

/**
 * print_sign - Check description
 * @n: An input number
 * Description: A function that prints the sign of a number
 * Return: 1 if it's a positive number, 0 if it's 0
 * -1 if it's a negative number
 */

int print_sign(int n)
{
	int value;

	if (n > 0)
	{
	value = 1;
	_putchar('+');
	}
	else if (n == 0)
	{
	value = 0;
	_putchar('0');
	}
	else
	{
	value = -1;
	_putchar('-');
	}
	return (value);
}
