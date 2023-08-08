#include <stdlib.h>

/**
 * _strdup - returns pointer to a duplicate of a string
 * @str: string to duplicate
 *
 * Return: pointer to a dup string, NULL if fails
 */

char *_strdup(char *str)
{
	char *dstr;
	unsigned int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	i = len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	len++;

	dstr = malloc(len * sizeof(*str));

	if (dstr == NULL)
	{
		return (NULL);
	}

	while (i <= len)
	{
		dstr[i] = str[i];
		i++;
	}

	return (dstr);
}
