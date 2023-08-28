#include "main.h"
/**
 * _srrpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (success)
 */
char *



-strpbrk(char *s, char *accept)
{
	int k;
	while (*s)
	{
		for (k =0; accept[k]; k++)
		{
			if (*s ==accept[k])
				return (s);
		}
		s++
	}
	return ('\0');
}
