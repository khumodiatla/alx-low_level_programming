#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 * Return: None
 */

void print_numbers(void)
{
	int i;
	char j;

	for (i = 1; i <= 10; i++)
	{
		for (j = '0'; j <= '14'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
