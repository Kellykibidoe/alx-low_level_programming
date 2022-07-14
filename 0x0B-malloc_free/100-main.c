#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code ALX SChool Students
 * 
 * Return: Always 0. 
 */

int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    id (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}
