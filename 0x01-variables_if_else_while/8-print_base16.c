#include <stdio.h>
/**
* main - checks for hexadecimal characters 0 to f
*
* Return: 1 when printing hexadecimal 0 to f
*/
int main(void)
{
	char hex;

	for (hex = '0'; hex<= '9'; hex++)
		putchar(hex);
	for (hex = 'a'; hex<= 'f'; hex++)
		putchar(hex);
putchar('\n');
return (0);
}
