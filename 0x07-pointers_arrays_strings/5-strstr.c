#include "main.h"

/**
 * *_strstr -  function that locates a substring
 * @haystack: main string
 * @needle: a sub-string
 * Return: Returns a pointer to the beginning of the
 * located substring, or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int k = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		k = i;
		while (haystack[k] == needle[j] && needle[j] != '\0')
		{
			j++;
			k++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
