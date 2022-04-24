#include "main.h"
/**
 * _islower - returns 1 if lowercase alphabet and 0 otherwise
 * @c: takes in a character 
 * Return: 0 for uppercase, 1 for lowercase
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
