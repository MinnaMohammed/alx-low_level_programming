#include <stdio.h>
/**
 * print_numbers - a function that prints the numbers, from 0 to 9.
 *
 * Return: numbers from 0 to 9
*/
void print_numbers(void)
{
char i;
for (i = '0'; i <= '9'; i++)
{
	_putchar(i);
}
_putchar('\n');
}
