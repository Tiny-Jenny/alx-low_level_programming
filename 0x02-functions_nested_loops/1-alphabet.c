#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Entry point
 * Return:0
 */
void _putchar(char c) {
	putchar(c);
}	
void print_alphabet(void)
{
	char letter = 'a';
	
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
