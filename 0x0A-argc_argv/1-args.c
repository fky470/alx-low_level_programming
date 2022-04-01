#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * argc: count number of arguments
 * *argv: size of argc
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}
