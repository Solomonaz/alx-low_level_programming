#include "main.h"

/**
 * main - prints  string "_putchar" using
 * Description: my own headerfile and putchar () function prototype
 * Return: Always 0 (sucess)
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
