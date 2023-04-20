#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds 2 integers
 *@a: first integer
 *@b: second integer
 * Return: sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts 2 integers
 *@a: first integer
 *@b: second integer
 * Return: difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multipies 2 integers
 *@a: first integer
 *@b: second integer
 * Return: product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides 2 integers
 *@b: second integer
 *@a: first integer
 * Return: result of the division of a by b
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - gets the remainder of the division of 2 numbers
 *@a: first integer
 *@b: second integer
 * Return: remainder of the division of a by b
*/
int op_mod(int a, int b)
{
	return (a % b);
}

