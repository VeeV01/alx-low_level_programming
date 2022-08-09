#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: the int that is used for the arguement of the function.
 * Return: 1 if c is upercase, other wise 0
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
