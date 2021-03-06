#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of the multiplication
 * @argc: number of arguments
 * @argv: an array of pointers to the arguments
 * Return: return 1 if the program does not
 * receive two arguments otherwise return 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
