#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest:the destination of the concatenation
 * @src: the source of the concatenation
 *
 * Return: the pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dcnt = 0;
	int scnt;

	while (dest[dcnt] != '\0')
	{
		dcnt++;
	}

	scnt = 0;
	while (src[scnt] != '\0')
	{
		dest[dcnt] = src[scnt];
		scnt++;
		dcnt++;
	}
	dest[dcnt] = '\0';

	return (dest);
}
