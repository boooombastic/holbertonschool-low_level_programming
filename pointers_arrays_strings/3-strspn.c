#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to search
 * @accept: pointer to the string containing accepted characters
 *
 * Return: number of bytes in initial segment of s from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;
	int found;

	while (s[count] != '\0')
	{
		found = 0;
		i = 0;
		while (accept[i] != '\0')
		{
			if (s[count] == accept[i])
			{
				found = 1;
				break;
			}
			i++;
		}
		if (!found)
			break;
		count++;
	}

	return (count);
}
