#include "main.h"
/**
 * rev_string - reverse s
 * @s: string to reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	char *rev_s;
	int i, j;

	j = 0;
	for (i = (strlen(s) - 1); i >= 0; i--)
	{
		rev_s[j] = s[i];
		j++;
	}
	*s = *rev_s;
}
