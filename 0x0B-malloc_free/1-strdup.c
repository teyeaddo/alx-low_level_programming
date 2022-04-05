#include"main.h"
#include<stdlib.h>

/**
 * *_strdup -this function copies a string
 * @str: target string to be copied
 *
 * Return: pointer to the copied string
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i, a;

	i = 0;
	a = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
		return (NULL);

	while (a < i)
	{
		p[a] = str[a];
		a++;
	}

	return (p);
}
