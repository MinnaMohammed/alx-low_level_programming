#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcmp - compares two strings.
 *@s1: first string.
 *@s2: second string.
 * Return: Always 0 (Success)
*/
int _strcmp(char *s1, char *s2)
{

	while (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}

return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
