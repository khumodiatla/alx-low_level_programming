#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 * Return: None
 */

void print_numbers(void)
{
	int i;

	for(i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i);
	}
	_putchar('\n');
}
