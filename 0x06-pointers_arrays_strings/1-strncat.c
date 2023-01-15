#include "main.h"

/**
  * _strncat - concatenates two strings.
  * @dest: Array to
  * @src: String that recieve the value
  * @n: The bytes for src
  * Return: dest
  */


char *_strncat(char *dest, char *src, int n)
{
	int i, j, cont;

	cont = 0;

	for (i = 0 ; dest[i] != '\0'; i++)
	{
		cont++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[cont] = src[j];
		cont++;
	}
	dest[cont] = '\0';

	return (dest);

}
