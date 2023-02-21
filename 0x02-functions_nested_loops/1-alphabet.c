#include "main.h"
/**
 * print_alphabet - prints all alphabet in lower case
 */

void print_alphabet(void)
{
	char C = 'a';

	while (C <= 'z')
	{
		_putchar(C);
		C++;
	}
	_putchar('\n');
}
