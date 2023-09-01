#include "main.h"

/**
 * wildwild - compares string wild asterisk
 * @str1: pointer to first string
 * @str2: pointer to second string
 * Return: 1 if same 0 if different
 */
int wildwild(char *str1, char *str2)
{
	if (*str1 == '\0')
	{
		if (*str2 != '\0' && *str2 == '*')
		{
			return (wildwild(str1, str2 + 1));
		}
		return (*str2 == '\0');
	}

	if (*str2 == '*')
	{
		return (wildwild(str1, str2 + 1) || wildwild(str1 + 1, str2));
	}
	else if (*str1 == *str2)
	{
		return (wildwild(str1 + 1, str2 + 1));
	}
	return (0);
}
/**
 * wildcmp - compares string wild asterisk
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: 1 if same 0 if different
 */
int wildcmp(char *s1, char *s2)
{
	return (wildwild(s1, s2));
}
