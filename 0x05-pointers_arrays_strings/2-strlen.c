#include "main.h"

/**
 * _strlen - function that returns len of string
 * @s: this is the input string
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		return (index);
}
