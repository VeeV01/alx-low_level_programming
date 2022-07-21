#include "main.h"

/**
 * is_prime_number -  function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: Aninput integer
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	return (0);

	if (n <= 3)
	return (1);

	return (is_divisible(n, div));
}

/**
 * is_divisible - check if num is divible
 * @num: the number to be checked
 * @div: the result of division
 * Return: 1 if num is divisible or 0 if num is not divisible
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
	return (0);

	if (div == num / 2)
	return (1);

	return (is_divisible(num, div + 1));
}
