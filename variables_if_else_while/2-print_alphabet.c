#include <stdio.h>
/**
 * main - Put the alphabet in one line
 *
 * Return: Always 0
 */
int main(void)
{
	char pr = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(pr + i);
	}
	putchar('\n');

	return (0);
}
