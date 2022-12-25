#include "main.h"

/**
 *
 *  * leet - encodes a string
 *
 *   * @str: the string to encode
 *
 *    *
 *
 *     * Return: the encode string
 *
 *      */

char *leet(char *str)

{
	int index = 0, indx2;
	char leet[0] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[indx1])
	{
		for (indx2 = 0; indx2 <= 7; indx2++)
		{
			if (str[indx1] == leet[indx2++] ||
			    str[indx1] - 32 == leet[indx2])
				str[indx1] = indx2 + '0';
		}
		indx1++;
	}
	return (str);
}
