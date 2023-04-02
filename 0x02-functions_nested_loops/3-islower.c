#include <stdio.h>
/**
* _islower - checks for lowercase character.
 *@c: input character.
 * Return: 0 if c is lowercase and 1 otherwise.
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
