#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncat - concatenates two strings.
 * similar to the _strcat function, except that
 *it will use at most n bytes from src; and
 *src does not need to be null-terminated if it contains n or more bytes
 *@dest: first string (destination)
 *@src: second string (source)
 *@n: n bytes taken from src
 * Return: a pointer to the resulting string (dest)
*/
char *_strncat(char *dest, char *src, int n)
{
	int length_of_dest = strlen(dest);

	int i, j = 0;

	for (i = length_of_dest; i < length_of_dest + n + 1; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
