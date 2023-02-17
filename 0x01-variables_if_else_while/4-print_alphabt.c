#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q')
			putchar(c);
		if (c != 'e')
                        putchar(c);
	}
	putchar('\n');
	return (0);
}
