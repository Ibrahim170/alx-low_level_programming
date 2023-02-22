#include "main.h"

/**
 * print_alphabet - Main
 * Description: print alphabet , lowercase
 *
 * Return: void.
 */
void print_alphabet(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		_putchar(chr);
	}
	_putchar('\n');
}
