#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 *@a: input array.
 *@n: number of elements in an array.
*/
void reverse_array(int *a, int n)
{
	int i, j;
	int array2[n];

	for (i = 0; i < n; i++)
	{
		array2[n - i - 1] = a[i];
	}

	for (j = 0; j < n; j++)
	{
		a[j] = array2[j];
	}


}
