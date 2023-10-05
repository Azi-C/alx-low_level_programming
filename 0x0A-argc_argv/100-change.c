#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that prints the minimum number of coins
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int j;
	int res = 0;
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
			return (0);
		}
		num = atoi(argv[1]);

		for (j = 0; j < 5 && num; j++)
		{
			while (num >= coins [j])
			{
				res++;
				num -= coins[j];
			}
		}
		printf("%d\n", res);
		return (0);

	}
}
