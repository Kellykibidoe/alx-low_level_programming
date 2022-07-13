#include "main.h"
#include <stdio.h>

/**
* main - program to print all received arguments
* @argc: argument count
* @argv: argument vector
* Return: int
*/

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
