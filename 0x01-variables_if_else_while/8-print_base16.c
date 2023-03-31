#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}

	putchar('\n');

	return (0);
}
