#include "main.h"
/**
 * puts_half - prints half of str
 * @str: string to print half
 */

void puts_half(char *str)
{
	int i, len_s, n;

	len_s = strlen(str) - 1;
	if (len_s % 2 == 0)
		n = (len_s / 2);
	else
		n = (len_s / 2);	
	for (i = n; i < len_s + 1; i++)
		putchar(str[i]);
	putchar('\n');
}
