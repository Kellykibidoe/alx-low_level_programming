#include "main.h"
#include <stdio.h>

/**
* main - a program to print the number of passed arguments
* @argc: argument count
* @argv: argument vector
* Return: int
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		argv = argv;
		printf("%d\n", argc - 1);
	}
	return (0);
}
