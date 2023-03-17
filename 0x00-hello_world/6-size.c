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
printf("Size of a char: %zu byte(s)\n", sizeof(character));
printf("Size of an int: %zu byte(s)\n", sizeof(integer));
printf("Size of a long int: %zu byte(s)\n", sizeof(long_var));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long_long_var));
printf("Size of a float: %zu byte(s)\n", sizeof(float_var));

return (0);
}
