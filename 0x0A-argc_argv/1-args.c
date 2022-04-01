#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name, followed by a new line
 * argc: count number of arguments
 * *argv: size of argc
 * Return: return 0
 */

int main(int argc, char *argv[] __attribute__((__unused__)))
{
	printf("%d\n", argc - 1);

	return (0);
}
