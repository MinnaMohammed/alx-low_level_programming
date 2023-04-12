#include <stdio.h>
#include <stdlib.h>
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

	while (i < argc)
	{
		if ((argv[i][0] >= 'a' && argv[i][0] <= 'z'))
		{
			if ((argv[i][0] >= 'A' && argv[i][0] <= 'Z'))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
		i++;
	}

	printf("%d\n", sum);


	return (0);
}
