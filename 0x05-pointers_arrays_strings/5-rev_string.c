#include "main.h"
/**
 * rev_string - reverse s
 * @s: string to reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, len_s;
	char tmp;

	len_s = strlen(s) - 1;
	for (i = 0; len_s > i; i++)
	{
		tmp = s[i];
		s[i] = s[len_s];
		s[len_s] = tmp;
		len_s--;
	}
}
