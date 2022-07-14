#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - check the code for ALX School Students
* @ac: integer
* Return: Always 0.
*/

int main(int ac, char *av[])
{
	char *s;

	s = argstostr(ac, av);
	if (s == NULL)
	{
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
