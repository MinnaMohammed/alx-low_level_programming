#include <stdio.h>
#include "main.h"
/**
 * _strncpy -  copies a string.
 *@dest: first string (destination).
 *@src: second string (source).
 *@n: bytes copied from the src to the dest string.
 * Return: result in string (dest).
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;


	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
		{
		dest[i] = src[i];
		}
		else
		{
		dest[i]= '\0';
		}
	}
	dest[i] = '\0';

	return (dest);
}
