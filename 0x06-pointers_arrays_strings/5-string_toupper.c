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
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
		{
			continue;
		}
		*str = *str - 32;
		str++;
	}

return (str);
}
