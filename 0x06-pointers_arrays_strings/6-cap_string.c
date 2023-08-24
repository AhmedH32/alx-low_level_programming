#include "main.h"

/**
 * cap_string - capitalizes all words
 * @n: pinter to string in question
 * Return: the string
 */
char *cap_string(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] == ' ' ||
		    n[i] == '\t' ||
		    n[i] == '\n' ||
		    n[i] == ',' ||
		    n[i] == ';' ||
		    n[i] == '.' ||
		    n[i] == '!' ||
		    n[i] == '?' ||
		    n[i] == '"' ||
		    n[i] == '(' ||
		    n[i] == ')' ||
		    n[i] == '{' ||
		    n[i] == '}')
		{
			if (n[i + 1] <= 122 && n[i + 1] >= 97)
				n[i + 1] -= 32;
		}

		i++;
	}
	return (n);
}
