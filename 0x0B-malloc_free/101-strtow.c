#include "main.h"
/**
 * wordnofn - counts number of words in str
 * @str: string to count
 * @wordslen: pointer to array of pointers
 * Return: no of words
 */
int wordnofn(char *str, int **wordslen)
{
	int i = 0, wordno = 0, flag = 0;

	while (str[i])
	{
		if (str[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			wordno++;
		}
		i++;
	}

	*wordslen = (int *)malloc(sizeof(int) * wordno);
	return (wordno);
}
/**
 * setwordslen - sets the lenght of each word
 * @strtrgt: the pointer that will be returned
 * @str: the original str
 * @wordslen: the pointer to the array containing the word lengths
 * Return: void
 */
void setwordslen(char **strtrgt, char *str, int *wordslen)
{
	int i = 0, flag = 1, tmp = 0, crnt = 0;

	while (str[i])
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
			{
				flag = 1;
			}
		}

		else if (flag)
		{
			tmp++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				wordslen[crnt] = tmp;
				strtrgt[crnt] = malloc(sizeof(char) * tmp + 1);
				flag = 0;
				tmp = 0;
				crnt++;
			}
		}
		i++;
	}
}
/**
 * strtow - cuts a string into individiual words
 * @str: the string to cut
 * Return: pointer array containing strings
 */
char **strtow(char *str)
{
	int i = 0, wordno = 0, *wordslen, flag = 1, k = 0, crnt = 0;
	char **arrstr;

	if (str == NULL)
		return (NULL);
	wordno = wordnofn(str, &wordslen);
	if (!wordno)
		return (NULL);
	arrstr = malloc(sizeof(char *) * wordno + 1);
	setwordslen(arrstr, str, wordslen);
	for (i = 0; i < wordno; i++)
	{
		arrstr[i] = malloc(sizeof(char) * wordslen[i] + 1);
	}
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
			{
				flag = 1;
			}
		}
		else if (flag)
		{
			arrstr[crnt][k] = str[i];
			k++;
			if (str[i + 1] == ' ')
			{
				arrstr[crnt][k] = '\0';
				crnt++;
				k = 0;
			}
		}
		i++;
	}
	free(wordslen);
	arrstr[crnt + 1] = NULL;
	return (arrstr);
}
