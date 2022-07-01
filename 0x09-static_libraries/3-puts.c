#include "main.h"

/**
 * _puts - print a string
 * @str:pointer char
 * return:void
 */

void _puts(char *s)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(*s[i]);
	}
_putchar('\n');
return;
}