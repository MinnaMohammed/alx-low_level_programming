#include "main.h"
#include <string.h>
/**
 * _strlen - returns the length of a string.
 *@s: points to the address of the variable s.
 * Return: the length of a string.
*/
int _strlen(char *s)
{
	int string_length = strlen(*s);

	return (string_length);
}
