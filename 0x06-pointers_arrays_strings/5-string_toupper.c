#include "holberton.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @str: the string to change
 *
 * Return: the string that change for uppercase
 *
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
