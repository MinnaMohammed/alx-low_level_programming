#include <stdio.h>
/**
 * print_to_98 -  prints all natural numbers from n to 98,
 * followed by a new line.
 *
 *@n: first printed number.
*/
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i == n)
		{
			printf("%d", i);
			continue;
		}
		printf(", %d", i);
	}
	printf("\n");
}
