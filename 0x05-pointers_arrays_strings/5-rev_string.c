#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - reverses a string.
 *@s: input string
*/
void rev_string(char *s)
{
	int i, tmp;

	int length = strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		tmp = s[i];
		s[i] = s[i - length - 1];
		s[i - length - 1] = tmp;
	}
}
