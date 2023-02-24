#include "main.h"

/**
 * print_numbers - print numbers from 0 - 9
 *
 * Return: void
 */

void print_numbers(void)
{
char a = 0;
for (a = 0; a <= 9; a++)
{
_putchar(a + '0');
}
_putchar('\n');
}
