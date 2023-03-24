#include <stdio.h>
#include "main.h"
/**
 * print_triangle - prints a triangle.
 *
 * @size: triangle size.
*/
void print_triangle(int size)
{
	int i, j, k, count = 0;

	for (i = 0; i < size; i++)
	{
		count++;
		for (j = 0; j < size - count; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
