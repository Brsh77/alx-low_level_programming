#include <stdio.h>
/**
* main - checks for alpha character a to z except q and e
*
* Return: 1 when printing a to Z
*/
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{ 
	if(alpha != 'e' && alpha != 'q')
	{
		putchar(alpha);
	}
	}
putchar('\n');
return (0);
}
