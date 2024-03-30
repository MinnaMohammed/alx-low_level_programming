#include <stdio.h>
/**
 * div - a function that divides two integers.
 *@a: input number
 *@b: input number
 * Return: the result of dividing 2 numbers.
*/
int div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}
