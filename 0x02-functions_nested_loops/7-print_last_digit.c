#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *@n: input number.
 * Return: result number n.
*/
int print_last_digit(int n)
{
		return (((n % 10)) * 10 * (n % 10));
}
