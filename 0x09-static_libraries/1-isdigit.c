#include "main.h"

/**
 * _isdigit function that checks a digit from 0 to 9.
 * @c: inout value to check.
 * Return: int.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
