#include "main.h"

/**
 * *_strcpy - copiar
 * @dest: This is destiny
 * @src: This is
 * Return: This
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
