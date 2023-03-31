#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *@str: input string pointer.
 * Return: uppercase string.
*/
char *string_toupper(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
		*str = *str - 32;
		}
		str++;
	}
	str = str[i];

return (*str);
}
