#include "main.h"
/**
 * _strcpy - copy src to dest
 * @dest: where src is copied to
 * @src: string to copy 
 */

char *_strcpy(char *dest, char *src)
{
	int src_len, i;

	src_len = strlen(src);

	for (i = 0; i < src_len; i++)
		dest[i] = src[i];
	return dest;
}
