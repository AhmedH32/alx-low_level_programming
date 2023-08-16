#include "main.h"
#include <stdlib.h>
/**
 * print_number - prints an integer
 *@n: integer to be printed
 * Return: 0
 */
void print_number(int n)
{
  unsigned int j;
  int lngth = 1, f = 1, i;
  
  if (n < 0)
  {
    putchar('-');
     j = -n;
  }
  else
	  j = n;
  while (1)
    {
        j /= 10;
        if (j > 0)
        {
            lngth *= 10;
            f += 1;
        }
        else
            break;
        
      
    }
    for (i = 0; i < f; i++)
    {
        if (n < 0)
        {   
           _putchar(((n / lngth) * -1) + 48);
            n %= lngth;
            lngth /= 10;
        }
        else
        {
           _putchar((n / lngth) + 48);
            n %= lngth;
            lngth /= 10;
        }
        
    }
}
