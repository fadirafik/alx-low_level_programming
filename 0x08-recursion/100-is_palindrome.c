#include "main.h"

/**
 * len_rec - recurssively checks length of s
 * @s: user input
 *
 * Return: length of s
*/

int len_rec(char *s)
{
	if (!*s)
		return (0);
	return (1 + len_rec(s++));
}

/**
 * pal - palindrome checker
 * @s: user input string
 * @l: position current
 *
 * Return: 1 if palindrome 0 if not
*/

int pal(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}
	if (*s == *(s + l))
	{
		return (pal(s + 1, l - 2));
	}
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string input
 *
 * Return: 1 if palindrome 0 if not
*/

int is_palindrome(char *s)
{
	int len = len_rec(s);

	return (pal(s, len - 1));
}
