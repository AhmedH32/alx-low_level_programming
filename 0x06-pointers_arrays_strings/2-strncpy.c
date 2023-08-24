#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of letters to copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j;

        while (*(src + i) != '\0')
                i++;
        if (n > i)
                n = i;
        for (j = 0; j < n; j++)
        {
                *(dest + j) = *(src + j);
        }
       
        return (dest);	
}
