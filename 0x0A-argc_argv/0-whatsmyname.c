#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main-  program that prints its name
 * @argc: arguments counter
 * @argv: array for these arguments
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	exit (EXIT_SUCCESS);
}
