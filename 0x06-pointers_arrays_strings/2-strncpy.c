#include "main.h"

/**
  * _strncpy - concatenates two strings.
  * @dest: arry thhat is coped
  * @src: String that recieve the value
  * @n: number of caracter to copy from src
  * Return: dest
  */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
