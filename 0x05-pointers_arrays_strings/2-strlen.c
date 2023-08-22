#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: lenght
 */
int strlen(char *s)
{
int total_len;
total_len = 0;

while (s[total_len] != '\0')
	{
		total_len++;
	}
return (total_len;)
}
