#include "main.h"

/**
 * _islower -> checks for lowercase character.
 * @c: The input character to check
 * Return: returns 1 and 0 depending on the condition
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
