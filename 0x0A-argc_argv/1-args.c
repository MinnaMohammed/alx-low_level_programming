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
	argv[0] = argv[0];

	if (argc != 0)
	{
		printf("%d\n", (argc - 1));
	}

	return (0);
}
