#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: An input integer
 * Return: The result of square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);

	return (_sqrt_recursion(1, n));
}
