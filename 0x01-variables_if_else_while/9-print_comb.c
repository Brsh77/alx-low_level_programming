#include <stdio.h>
/**
* main - checks for combination of sigledigit number character 0 to 9
*
* Return: 1 when printing 0 to 9 with comma and space
*/
int main(void)
{
	int n;

for (n = '0'; n <= '9'; n++)
{	
	putchar(n);
	if (n == '9')break;
		putchar(',');
		putchar(' ');
}
putchar('\n');
return (0);
}
