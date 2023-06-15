#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
int _putchar(char s);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
unsigned int _strlen(char *s);
void concat(char *s1, char *s2, int n, char *cat);
int *array_range(int min, int max);
void *_calloc(unsigned int nmemb, unsigned int size);

#endif