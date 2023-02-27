#include "main.h"
/**
 * void_puts - prints string to stdout
 * @s: string to print 
 */

void _puts(char *str)
{
	printf("%s", *str);
	int i;

	for(i = 0; i < strlen(str); i++)
		_putchar(str[i]);
	_putchar('\n');
}
