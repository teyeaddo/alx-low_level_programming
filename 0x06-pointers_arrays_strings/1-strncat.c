#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination of the concatenation
 * @src: the source of the concatenation
 * @n: bytes limit
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dcnt = 0;
	int scnt;

	while (dest[dcnt] != '\0')
	{
		dcnt++;
	}

	scnt = 0;
	while (src[scnt] != '\0' && scnt < n)
	{
		dest[dcnt] = src[scnt];
		scnt++;
		dcnt++;
	}
	dest[dcnt] = '\0';

	return (dest);
}
