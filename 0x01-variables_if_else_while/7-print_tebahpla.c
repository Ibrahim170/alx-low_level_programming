#include <unistd.h>
#include <stdio.h>
/**
 * main - Main
 * Desc: prints lowercase alphabets in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	int chr;

	for (chr = 'z'; chr >= 'a'; chr--)
	{
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
