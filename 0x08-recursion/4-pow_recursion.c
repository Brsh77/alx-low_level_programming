#include "main.h"

/**
 * discription - that returns the value of x raised to the power of y
 * If y is lower than 0, the function should return -1
 * discription - _pow_recursion - Search a string for any of a set of bytes.
 * @x: base
 * @y: exposant
 * Return: Pointer to the byte in `s` that matches one of the bytes in `accept`
 * or NULL if no such byte is found.
 */

int _pow_recursion(int x, int y)
{

if (y < 0)
	return (-1);
else if (y == 1)
	return (x);
else if (y == 0)
	return (1);

return (x * _pow_recursion(x, y - 1));

}
