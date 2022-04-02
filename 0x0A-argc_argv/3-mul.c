#include <stdio.h>

/**
 * main - main function
 * argc: number of arguments
 * argv: stores int value arguments in command line
 * Return: return 1 if the program does not receive two arguments
 * otherwise return 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum * atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
