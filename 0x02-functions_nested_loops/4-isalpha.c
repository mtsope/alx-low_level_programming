
#include "main.h"

/**
 * _isalpha - Entry point
 *
 * description: 'check if char is lower'
 * *@c: test case
 *
 * Return: 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
