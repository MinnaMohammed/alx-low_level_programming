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
	if (argc != 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
