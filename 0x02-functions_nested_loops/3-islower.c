#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lower case char
 * @c: char we want to check
 * Return: 1 if c is lower case otherwise 0
 */

int _islower(int c)
{
	return islower( c ) ? 1 : 0;
}
