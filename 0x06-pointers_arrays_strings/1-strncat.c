#include "main.h"

/**
 *
 *  * _strncat - concatenates two strings
 *
 *   * @dest: input parameter string
 *
 *    * @src: input parameter string
 *
 *     * @n: times to iterations
 *
 *      *
 *
 *       * Return: dest
 *
 *        */

char *_strncat(char *dest, char *src, int n)

{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; scr[index] && index < n; index++)
		dest[dest_len++] = scr[index];

	return (dest);
}
