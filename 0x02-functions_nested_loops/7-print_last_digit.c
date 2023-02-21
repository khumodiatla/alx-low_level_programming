#include "main.h"
/**
 * print_last_digit - print last digit of n
 * @n: nuumber to evaluate
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	_putchar(n % 10);
	return (n % 10);
}
