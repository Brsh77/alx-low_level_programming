#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: takes B an integer
 * Return: returns output
 */
int print_last_digit(int n)
{
	int B = n % 10;

	if (n < 0)
		B = B * -1;
	_putchar(B + '0');
	return (B);
}
