#include "main.h"

/**
 * main- writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */


int main(void)
{
	char st[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(st[i]);
	}
	_putchar('\n');
	return (0);
}
