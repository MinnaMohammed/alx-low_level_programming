#include <stdio.h>
#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14.
*/
void more_numbers(void)
{
int number, i;
for (i = 0; i < 10; i++)
{
for (number = 0; number <= 14; number++)
{
	if (number >= 10)
	{
	_putchar('1');
	_putchar(number % 10 + '0');
	}
	else
	{
	_putchar(number);
	}

}
_putchar('\n');
}
}
