#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;
	int i;
	
	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		*(ptr + i) = 0;
	}
	return (ptr);
}