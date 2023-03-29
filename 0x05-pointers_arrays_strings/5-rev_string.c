#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - reverses a string.
 *@s: input string
*/
void rev_string(char *s)
{
	int i;
	char *newstring = " ";

	strcpy(s, newstring);

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		s[i] = newstring[i - strlen(s) - 1];
	}
}
