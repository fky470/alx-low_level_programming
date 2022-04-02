#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, d;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
	}

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (d = 0 ; argv[i][d]; d++)
			{
				if (argv[i][d] < '0' || argv[i][d] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}

			sum = sum + atoi(argv[i]);
		}

		printf("%d\n", sum);
	}
}
