#include <stdio.h>
#include <unistd.h>
/**
 * main - Main
 * Desc: prints the alphabet in lowercase
 * Return: 0(success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
return (0);
}
