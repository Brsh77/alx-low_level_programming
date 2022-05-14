#include "main.h"

/**
 * print_triangle - check for a digit
 * a function that prints a triangle, followed by a new line
 * Where size is the size of the triangle
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 * @size : integer type
 * Return:void
 */

void print_triangle(int size)
{

	int i = 1, ii;

	while (i <= size && size > 0)
	{
		ii = 0;
		while (ii < size - i)
		{
			_putchar(' ');
			ii++;
		}
		ii = 0;
		while (ii < i)
		{
			_putchar('#');
			ii++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
