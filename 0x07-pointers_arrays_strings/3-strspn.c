#include "main.h"

/**
 * _strspn - return number of bytes which consist only of bytes form accept
 * @s: pointer to string to search
 * @accept: charset
 * Return: pointer to unsigned int 
 */
unsigned int _strspn(char *s, char *accept)
{
   int i = 0, j =0, k ,l, found = 0;
   
    while (s[i] != '\0')
        i++;
    while (accept[j] != '\0')
        j++;
    for (k = 0; k < i; k++)
    {
        found = 0;
        for (l = 0; l < j; l++)
        {
            if (s[k] == accept[l])
            {
               
                found = 1;
                break;
            }
        }
        if (!found)
            break;
    }
    return (k);
}
