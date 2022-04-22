#include <stdio.h>
/**
* main - checks for numberz character 0 to 9
*
* Return: 1 when printing 0 to 9
*/
int main(void)
{
	int numberz;

	for (numberz = '0'; numberz <= '9'; numberz++)
		putchar(numberz);
putchar('\n');
return (0);
}
