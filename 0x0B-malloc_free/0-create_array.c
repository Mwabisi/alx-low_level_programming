#include<stdlib.h>
#include<stdio.h>
#include "main.h"

/**
 * create_array - create array of chars
 * @size: size of array
 * @char: assigned char
 * Return: NULL or array
 */

char *create_array(unsigned int size, char c);
{
	char *ptrArray;
	unsigned int i;

	ptrArray = malloc(size *sizeof(char));

	for(i = 0, i < size; i++)
	{
		ptrArray[i] = c,
	}

	return ptrArray;
