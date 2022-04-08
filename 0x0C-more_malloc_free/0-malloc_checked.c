#include "main.h"
#include<stdlib.h>

/**
 * malloc_checked - this allocates memory using malloc
 * @b: indicates the number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}

