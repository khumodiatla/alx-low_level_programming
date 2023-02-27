#include "main.h"
/**
 * print_array - print array
 * @a: array
 * @n: length of a
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d, ", a[i]);
	printf("\n");
}
