#include "main.h"

/**
 * is_actual_palindrome - check if a string is a palindrome
 * @s: pointer to the string
 * @len: length of the string
 * @j: iterator through string
 * Return: 1 if palindrome 0 if not
 */

int is_actual_palindrome(char *s, int len, int j)
{
	if (len < j)
		return (1);
	if (s[j] == s[len])
		return (is_actual_palindrome(s, len - 1, j + 1));
	else
		return (0);

}
/**
 * _strlen - gets length of string
 * @s: pointer to the string
 * Return: length of str
 */
int _strlen(char *s)
{
	if (*s)
		return (1 + _strlen(s + 1));
	else
		return (0);
}
/**
 * is_palindrome - check if a string is a palindrome
 * @s: pointer to the string
 * Return: 1 if palindrome 0 if not
 */
int is_palindrome(char *s)
{
	int i = 0;

	i = _strlen(s);
	return (is_actual_palindrome(s, i - 1, 0));
}
