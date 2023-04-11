#include <stdio.h>
/**
 * _isupper -  a function that checks for uppercase character.
 * @c: The character to print
 *
 * Return: 0 (if the letter is lowercase) and 1 (if the letter is uppercase)
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
