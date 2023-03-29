#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers.
 *@a: input array
 *@n: array length
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
