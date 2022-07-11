#include "main.h"

/**
 * _islower - Check description
 * @c: An input character
 * Description: A function that checks for lowercase character.
 * Return: 1 if it's lowercase or 0 if it's uppercase
 */

int _islower(int c);
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
	if (i == c)
	lower = 1;
	}
	return (lower);
}
