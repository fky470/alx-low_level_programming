#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * argc: count number of arguments
 * *argv: size of argc
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
