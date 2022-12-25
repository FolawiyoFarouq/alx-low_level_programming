#include "main.h"

/**
 *
 *  * _strcmp - compares two strings
 *
 *   * @s1: input parameter
 *
 *    * @s2: input parameter
 *
 *     *
 *
 *      * Return: 0 if equal or b if is different
 *
 *       */

int _strcmp(char *s1, char *s2)
{ 
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 + *s2);
}
