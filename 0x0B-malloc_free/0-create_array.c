#include<stdlib.h>
#include<stdio.h>
#include "main.h"

/*
 * @char: char
 * @size: size of array
 * Description: create an array of size and assign char c
 * Return: NULL or array
 */

char *create_array(unsigned int size, char c);
{
	char *ptrArray;
	unsigned int i;

	ptrArray = malloc(size * sizeof(char));

	for (i = 0, i < size; i++)
	{
		ptrArray[i] = c;
	}

	return (ptrArray);
