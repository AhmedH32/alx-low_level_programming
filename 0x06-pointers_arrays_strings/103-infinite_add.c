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
  int i, j, overflow, tmp, k, bigger, v1, v2;

  i = j = overflow = k = 0;
  while (n1[i] != '\0')
    i++;
  while (n2[j] != '\0')
    j++;
  i--;
  j--;
  if (i >= size_r || j >= size_r)
    return (0);
  if (j > i)
    bigger = j;
  else
    bigger = i;
  for (; bigger >= 0; bigger--, k++,i--,j--)
    {
	    if (i < 0)
		    v1 = 0;
	    else
		    v1 = n1[i] - '0';
	    if (j < 0)
		    v2 = 0;
	    else 
		    v2 = n2[j] - '0';
     

      tmp = ((v1) + (v2)) + overflow;
	overflow = 0;
      overflow = (tmp / 10);
	if (k + 1 >= size_r)
		return (0);
      r[k] = ((tmp % 10) + '0');

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
