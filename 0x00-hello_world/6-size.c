#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int integer;
char character;
long long_var;
long long long_long_var;
float float_var;
printf("Size of a char: %u byte(s)\n", sizeof(character));
printf("Size of an int: %u byte(s)\n", sizeof(integer));
printf("Size of a long int: %u byte(s)\n", sizeof(long_var));
printf("Size of a long long int: %u byte(s)\n", sizeof(long_long_var));
printf("Size of a float: %u byte(s)\n", sizeof(float_var));

return (0);
}
