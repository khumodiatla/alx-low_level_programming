#include "main.h"
/**
 * print_alphabet_10 - prints all alphabet in lower case
 * Return: 0 always
 */
void print_alphabet_x10(void)
{
	char C;
	int i = 1;

	while (i <= 10)
	{
		C = 'a';

		while (C <= 'z')
		{
			_putchar(C);
			C++;
		}
		i++;
		_putchar('\n');
	}
}
