#include "main.h"

/**
 * print_line - check for a digit
 * a function that draws a straight line in the terminal
 * If n is 0 or less, the function should only print \n
 * You can only use _putchar function to print
 * @n : number of _ to be printed
 * Return:void
 */

void print_line(int n)
{

	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');

}
