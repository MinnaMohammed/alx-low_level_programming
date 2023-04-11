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
	int i = 0;

	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[i + 1]) * atoi(argv[i + 2]));

	return (0);
}
