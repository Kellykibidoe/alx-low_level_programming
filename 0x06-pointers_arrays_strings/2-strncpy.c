#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: the destination value
 * @src: the source code
 * @n: the copy limit
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0
	
	while (src[j])
	{
		j++;
	}
	while (i < n && src[j])
	{
		dest[i] = src[j];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
