#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 * Return: None
 */

void print_numbers(void)
{
	int i;

	for(j = 1; j <= 10; j++)
	{
		for(i = 48; i < 58; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	_putchar('\n');
}