#include <stdio.h>
/**
 * mod - a function that gets the remainder of dividing two integers.
 *@a: input number
 *@b: input number
 * Return: the result of getting the modulus of 2 numbers.
*/
int mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
