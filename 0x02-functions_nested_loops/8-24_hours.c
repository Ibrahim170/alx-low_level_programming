#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Description: prints every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
for (int h = 0; h < 24; h++)
{
for (int m = 0; m < 60; m++)
{
_putchar( h/10 + '0');
_putchar( h%10 + '0');
_putchar(':');
_putchar( m/10 + '0');
_putchar( m%10 + '0');
_putchar('\n');
}
}
