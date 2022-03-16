#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @void : void
 * return : success 0
 */

int main(void)
{
	int n;
	int sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n * 3 || n * 5)
		{
			sum = sum + n;
		}
	}
	printf("%d\n", sum);
}
