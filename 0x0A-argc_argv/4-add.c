#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 *@argc: number of argument entered by the command line.
 *@argv: array of strings containing the argumnents.
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i = 1;

	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	while (i < argc && argv[i][0] != '\0')
	{
		if (atoi(argv[i]) >= 0)
		{
			sum = sum + atoi(argv[i]);
		}
		else if (isdigit(argv[i][0]))
		{
			printf("Error\n");
			return (1);
		}
		else if (argv[i][0] > '9' || argv[i][0] < '0')
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}

	printf("%d\n", sum);


	return (0);
}
