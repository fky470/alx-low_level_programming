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
		_putchar(c[d]);
	}
	_putchar('\n');
	return (0);
}
