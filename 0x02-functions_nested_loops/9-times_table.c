#include <stdio.h>
#include "main.h"
/**
 * times_table -  prints the 9 times table, starting with 0.
 *
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			if (j == 0)
			{
				printf("%d", (j * i));
				continue;
			}
			printf(", %d", (j * i));
		}
		_putchar('\n');

	}
}
