#include "main.h"
/**
 * _islower - checks for lower case char
 * @c: char we want to check
 * Return: 1 if c is lower case otherwise 0
 */

int _islower(int c)
{
	int result;

	result = c >= 'a' && c <= 'z';
	return result;
}
