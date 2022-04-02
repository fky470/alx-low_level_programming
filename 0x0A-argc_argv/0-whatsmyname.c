#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * @argc: count argument
 * @argv: size of argc
 * Return: success(0)
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
