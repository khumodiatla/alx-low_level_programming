#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 * Return: 1 always
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
