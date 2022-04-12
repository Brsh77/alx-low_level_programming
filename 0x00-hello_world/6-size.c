#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %2d byte(s) \n",(unsigned int) sizeof(char));
printf("Size of an int: %2d byte(s) \n", (unsigned int) sizeof(int));
printf("Size of a long int: %2d byte(s) \n", (unsigned int) sizeof(long int));
printf("Size of a long long int: %2d byte(s) \n", (unsigned int) sizeof(long long int));
printf("Size of a float: %2d byte(s) \n", (unsigned int) sizeof(float));
return (0);
}
