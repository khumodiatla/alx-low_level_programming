#include "main.h"
/**
 * rev_string - reverse s
 * @s: string to reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, j, len_s;

	len_s = strlen(s);
	char rev_s[len_s];

	rev_s = "";
	j = 0;
	for (i = (strlen(s) - 1); i >= 0; i--)
	{
		rev_s[j] += s[i];
		j++;
	}
	
	for (i = 0; i < len_s; i++)
	{
		s[i] = rev_s[i];
	}
}
