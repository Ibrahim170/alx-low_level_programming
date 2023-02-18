#include <stdio.h>
#include <unistd.h>
/**
 * main -Main
 * Desc: prints all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putcher('\n');
	return (0);
}
