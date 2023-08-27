#include "main.h"

void revstringer (char *s)
{
  int end = 0, start = 0;
  char tmp = 0;

  while (s[end] != '\0')
    end++;
  end--;
  for (; start < end; start++, end--)
    {
      tmp = s[start];
      s[start] = s[end];
      s[end] = tmp;
    }
}

char *infinite_add (char *n1, char *n2, char *r, int size_r)
{
  int i, j, overflow, tmp, k, bigger;

  i = j = overflow = k = 0;


  while (n1[i] != '\0')
    i++;

  while (n2[j] != '\0')
    j++;


  if (size_r <= i || size_r <= j)
    return (0);

  j--;
  i--;
  if (j > i)
    bigger = j;
  else
    bigger = i;
  for (; bigger >= 0; bigger--, k++)
    {
      if (k + 1 >= size_r)
	return (0);
      overflow = 0;

      tmp = ((n1[i] - '0') + (n2[j] - '0')) + overflow;

      overflow = (tmp / 10);

      r[k] = ((tmp % 10) + '0');


      if (j > 0)
	j--;
      if (i > 0)
	i--;

    }

  
  if (k + 1 >= size_r)
    return (0);
  if (overflow != 0)
    {
      r[k] = overflow + '0';
      k++;
    }

  r[k] = '\0';

  revstringer (r);

  return (r);
}

int main (void)
{
        char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
        char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
        char r[100];
        char r2[10];
        char r3[11];
        char *res;

        res = infinite_add(n, m, r, 100);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "1234567890";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "999999999";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        res = infinite_add(n, m, r3, 11);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        return (0);
}

