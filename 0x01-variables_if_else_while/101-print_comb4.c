#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alwasy 0 (Success)
 */
int main(void)
{
	int ascii_code;
	for (ascii_code = 48; ascii_code <= 57; ascii_code++)
	{
		putchar(ascii_code);
		if (ascii_code < 57)
		{
			putchar(44);
			puthcar(32);
		}
	}
	putchar(10);
	return (0);
}
