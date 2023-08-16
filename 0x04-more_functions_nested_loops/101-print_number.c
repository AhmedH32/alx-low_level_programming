#include "main.h"

/**
 * print_number - prints an integer
 *@n: integer to be printed
 * Return: 0
 */
void print_number(int n)
{
  int j;
  int lngth = 1, f = 1, i;
  if (n < 0)
  {
    _putchar('-');
    n *= -1;
  }
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
        _putchar((n / lngth) + 48);
        n %= lngth;
        lngth /= 10;
    }	
	_putchar('\n');
}
