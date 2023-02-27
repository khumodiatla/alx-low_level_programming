#include "main.h"
/**
 * puts2 - print every char of s
 * @s: s to print chars of
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
