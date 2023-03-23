#include "main.h"
/**
 * print_diagonal - prints a diagonal shape.
 *@n: input number
*/
void print_diagonal(int n)
{
int i, j;

for (i = 0; i <= n; i++)
{
	for (j = 0; j < i; j++)
	{
		_putchar('\t');
	}
	_putchar('\\');
	_putchar('\n');

}
_putchar('\n');
}
