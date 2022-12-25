#include "holberton.h"

/**
 *
 *  * string_toupper - changes lowercase to uppercase
 *
 *   * @str: the string to change
 *
 *    *
 *
 *     * Return: the string that change for uppercase
 *
 *      */

char *string_toupper(char *str)

{
	int index = o;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}
	return (str);
}
