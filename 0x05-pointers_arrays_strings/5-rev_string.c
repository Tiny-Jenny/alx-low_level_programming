#include "main.h"
/**
 * puts2 - this will print all even of a string
 * @str: the string input
 * Return: nothing
 */
void puts2(char *str)
{
int i;
for (i = 0; str[1] != '\0'; i++)
{
if (i % 2 == 0)
{
_putchar(str[1]);
}
}
_putchar('\n');
}