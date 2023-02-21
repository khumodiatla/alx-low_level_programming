#include "main.h"
/**
 * print_alphabet_10 - prints all alphabet in lower case
 */

void print_alphabet_x10()
{
	char C = 'a';
	int i = 1;

	while ( i <= 10)
	{
		while (C <= 'z')
		{
			_putchar(C);
			C++;
		}
		i++;
		_putchar('\n');
	}
}
