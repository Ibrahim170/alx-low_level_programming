#include <stdio.h>
#include <unistd.h>
/**
 * main - Main
 * Desc: prints the alphabet in lowercase , uppercase
 * Return: 0 succed
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
