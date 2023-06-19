#include "main.h"
/**
 *  _strspn -gets the length of a prefix substring
 *  @s: input
 *  @accept: input
 *  Return: always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, val;

	val = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				val++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (val);
		}
		s++;
	}
	return (val);
}
