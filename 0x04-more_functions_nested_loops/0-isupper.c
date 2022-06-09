#include "main.h"

/** _isupper is a function that checks uppercase characters.
 * @c: input value to cheack
 * Return: int.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
