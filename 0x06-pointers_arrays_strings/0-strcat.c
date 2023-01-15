#include "main.h"

/**
  * _strcat - concatenates two strings.
  * @dest: arry thhat is coped
  * @src: String that recieve the value
  * Return: dest
  */


char *_strcat(char *dest, char *src)
{
	int i, j, cont;

	cont = 0;

	for (i = 0 ; dest[i] != '\0'; i++)
	{
		cont++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[cont] = src[j];
		cont++;
	}
	dest[cont] = '\0';

	return (dest);

}
