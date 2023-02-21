#include "main.h"
/**
 * print_last_digit - print last digit of n
 * @n: nuumber to evaluate
 * Return: last digit of n
 */

int print_last_digit(int n)
{	
	if (n  < 1)
	{
		_putchar((-1 * (n % 10)) + '0');
		return (-1 * (n % 10));
	}

	_putchar((n % 10) + '0');
	return (n % 10);
}
