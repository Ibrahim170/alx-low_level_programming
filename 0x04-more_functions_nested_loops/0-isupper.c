#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks is a character is uppercase
 * @c: carrier integer variable
 * Return: 1 if true, 0 if false
 */
int _isupper(int c)
{
int chr;

for (chr = 'A'; chr <= 'Z'; chr++)
{
if (c == chr)
{
return (1);
}
}
return (0);
}
