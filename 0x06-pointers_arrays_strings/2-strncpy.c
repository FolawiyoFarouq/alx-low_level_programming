#include "main.h"

/**
 *
 *  * _strncpy - copie the string
 *
 *   * @dest: array that returns
 *
 *    * @src: the pointer that receive the string
 *
 *     * @n: times to interate
 *
 *      *
 *
 *       * Return: the parameter dest.
 *
 *        */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, scr_len = 0;

	while (scr[index++])
		scr_len++;

	for (index = 0; scr[index] && index < n; index++)
		dest[index] = '\0';

	return (dest);
}
