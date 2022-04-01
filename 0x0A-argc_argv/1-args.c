#include "main.h"
#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * argc: count number of arguments
 * *argv: size of argc
 * Return: return 0
 */

int main(int argc, char **argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		*argv[i] = *argv[i];
	}
	printf("%d\n", (i - 1));
	return (0);
}
