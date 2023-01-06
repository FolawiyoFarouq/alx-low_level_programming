#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: Count arguments
 * @argv: Arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
