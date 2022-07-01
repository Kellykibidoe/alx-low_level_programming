#include "main.h"

/**
 * _puts - function that prints a string
 * @s: pointer to char
 * Return: Nothing.
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_puts(s[i]);
		i += 1;
	}
	_putchar('\n');
}

