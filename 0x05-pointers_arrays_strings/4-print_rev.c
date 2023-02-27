#include "main.h"
/**
 * print_rev - print s in reverse
 * @s: string to print in reverse
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;

	for (i = (strlen(s) - 1); i >= 0; i--)
		putchar(s[i]);
	putchar('\n');
}
