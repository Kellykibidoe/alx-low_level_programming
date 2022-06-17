#include "main.h"

/**
 * _strncat - concentrate two strings.
 * @dest: char dest
 * @src: char src
 * @n: length int
 * Retrun: char
 */

char *_strncat(char *dest, char *src, int n)
{
	unsigned int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		if (j < n)
		{
		i	*(dest + i) = *(src + j);
			i++;
		}
		j++;
	}
	return (dest);
}
