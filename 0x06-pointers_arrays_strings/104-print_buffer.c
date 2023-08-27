#include "main.h"

void print_buffer(char *b, int size)
{
    int i = 0, j = 0, k, l, n, c;
    
if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (l = 0; l < size; )
    {
        printf("%08x: ",j);
    
        for(k = 0; k < 10; k++)
        {
		c = b[i];
            if (l >= size)
            {
                for (n = 0; n < 10- k; n++)
                {
                    printf("  ");
                    if (n % 2)
                        printf(" ");
                }
               
                    break;
            }
                printf("%02x", c);
            if(k % 2)
                printf(" ");
            i++;
            l++;
        }
        if (l >= size)
            {
                l -= k;
                i -= k;
            }
        else
        {
            l -= 10;
            i -= 10;
        }
        
        for(k = 0; k < 10; k++)
        {
		c = b[i];
            if (l >= size)
            {
                    break;
            }
            if (c < ' '|| c > 132)
                printf(".");
            else
                printf("%c",c);
            i++;
            l++;
        }
        printf("\n");
        j += 10;
    }
}
