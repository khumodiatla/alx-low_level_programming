#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checksfor alphabetic char
 * @c: char to check
 * Return: 1 if c is a letter otherwise 0
 */

int _isalpha(int c)
{
	return isalpha(c) ? 1 : 0;
}
