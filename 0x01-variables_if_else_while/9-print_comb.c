#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 0)
		{
			putchar(i + '0');
			continue;
		}
		putchar(' ');
		putchar(',');
		putchar(i + '0');

	}
	return (0);
}
