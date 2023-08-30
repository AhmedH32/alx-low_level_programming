#include "main.h"

int actual_wildcmp(char *s1, char *s2, int len1, int len2, int i, int j)
{   
    if (i == len1 || j == len2)
    {
        if (s1[i] == s2[j])
        {
            //printf("here-3 at %c = %c \n",s1[i], s2[j] );
            return (1);
        }
        else if (s2[j]== '*')
        {
            //printf("here-2 at %c = %c \n",s1[i], s2[j] );
            return (actual_wildcmp(s1, s2, len1, len2, i - 1, j));
        }
        else
        {
            //printf("here-1 at %c = %c \n",s1[i], s2[j] );
            return (0);
        }
    }
    if (s1[i] == s2[j])
    {
        //printf("here0 at %c = %c \n",s1[i], s2[j] );
        return (actual_wildcmp(s1, s2, len1, len2, i + 1, j + 1));
    }
    else if (s2[j] == '*')
    {
        if (s2[j + 1] == '*')
        {
            //printf("here1 at %c = %c \n",s1[i], s2[j] );
            return (actual_wildcmp(s1, s2, len1, len2, i, j + 1));
        }
        else if (j + 1 == len2)
        {
            //printf("here2 at %c = %c \n",s1[i], s2[j] );
            return (1);
        }
        else
        {
            //printf("here3 at %c = %c \n",s1[i], s2[j]);
            if (i >= len1)
                return (0);
            if (s1[i] == s2[j + 1])
            {
                //printf("here4 at %c = %c \n",s1[i], s2[j] );
                return (actual_wildcmp(s1, s2, len1, len2, i + 1, j + 2));
            }
            else
            {
                //printf("here5 at %c = %c \n",s1[i], s2[j] );
                return (actual_wildcmp(s1, s2, len1, len2, i + 1, j));
            }
        }
    }
    else
    {
        //printf("here6");
        return (0);
    }
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
int wildcmp(char *s1, char *s2)
{
    int i, j;
    
    i = _strlen(s1);
    j = _strlen(s2);
    return (actual_wildcmp(s1, s2, i, j, 0, 0, 0));
}
