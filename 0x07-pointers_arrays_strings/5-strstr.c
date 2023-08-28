#include "main.h"

/**
 * _strstr - returns a poointer to the beginning of a located substring
 * @haystack: stringt to searchi in
 * @needle: substring to find
 * Return: pointer to the beginning of the string
 */
char *_strstr(char *haystack, char *needle)
{
    int i = 0, j = 0, k, l, flag = 0;
    
    while (haystack[i] != '\0')
        i++;
    while (needle[j] != '\0')
        j++;
    
    for (k = 0; k < i && !flag; k++)
    {
        if (haystack[k] == needle[0])
        {
            flag = 1;
            for (l = 1; l < j && k + l < i; l++)
            {
                if (haystack[k + l] != needle[l])
                {
                    flag = 0;
                    break;
                }
            }
        }
    }
   
    if (flag)
    {
        k--;
        return (haystack + k );
    }
    else
        return (NULL);
}
