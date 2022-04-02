#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the addition of positive numbers
 * @argc: number of arguments
 * @argv: pointers to an array of arguments
 * Return: return 1 if one of the number contains
 * symbols that are not digits otherwise return 0
 */

int main(int argc, char *argv[])
{
	int i, d;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (d = 0 ; argv[i][d]; d++)
		{
			if (argv[i][d] < '0' || argv[i][d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
