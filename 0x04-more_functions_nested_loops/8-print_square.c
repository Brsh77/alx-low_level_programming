#include "main.h"

/**
 * print_square - check for a digit
 * A function that prints a square, followed by a new line
 * Where size is the size of the square
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the square
 * @n : number of _ to be printed
 * Return:void
 */

void print_square(int n)
{

	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < n)
		{
			_putchar('#');
			ii++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');

}
