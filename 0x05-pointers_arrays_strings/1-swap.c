#include "main.h"
/**
 * swap_int - swab values of a and b
 * @a: value to swap
 * @b: value to swap
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
