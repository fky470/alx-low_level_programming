#include "main.h"
/**
 * main - entry
 *
 * Return: Always 0.
 */

int main(void)
{
	char c[] = "_putchar";

	int d;

	for (d = 0; d < 8; d++)
	{
		putchar(c[d]);
	}
	putchar('\n');
	return (0);
}
