#include "main.h"

/**
 * is_palindrome - function that checks if a string is a palindrome
 * @s: input string
 * Return: 1 if palindrome or 0 if not
 */

int is_palindrome(char *s)
{
	return (compare(s, (s + (_strlen(s)) - 1)));
}

/**
 * _strlen - function that returns the length of a string
 * @s: input string
 * Return: the length of a string
 */

int _strlen(char *s)
{
	if (*s)
	{
		s++;
		return (1 + (_strlen(s)));
	}
	return (0);
}

/**
 * compare - function that compares two characters if they match
 * @index_ltor: index reading left to right
 * @index_rtol: index reading right to left
 * Return: 1 if palindrome or 0 if not
 */

int compare(char *index_ltor, char *index_rtol)
{
	if (index_ltor >= index_rtol)
		return (1);
	if (*index_ltor == *index_rtol)
		return (compare(index_ltor + 1, index_rtol - 1));
	return (0);
}
