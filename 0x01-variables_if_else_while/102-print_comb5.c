#include <stdio.h>

void putter(int, int, int, int);
void puttercom(int, int, int, int);

/* more headers goes there */

/**
* main - entry point
*
* Return: 0
*/
int main(void)
{
	int i, j, k, l;

	j = k = l = 48;
	for (i = 49; i < 58; i++)
	{
		putter(i, j, k, l);

		if (i  == 57 && j == 57 && k == 56 && l == 57)
		{
			break;
		}
		puttercom(i, j, k, l);
		if (i == 57)
		{
			i = 47;
			j++;
		}
		if (j == 58)
		{
			k++;
			i = k;
			j = l;

			if (k == 57)
			{
				j = l + 1;
				i = 47;
			}
		}
		if (k == 58)
		{
			k = 48;
			i = 48;
			l++;
			j = l;
		}

	}
	putchar('\n');

	return (0);
}
/**
 * putter - prints each number using putchar
 * @i: first number
 * @j: second number
 * @k: third number
 * @l: fourth number
 *
 * Return: void noithing
 */
void putter(int i, int j, int k, int l)
{
	putchar(l);
	putchar(k);
	putchar(' ');
	putchar(j);
	putchar(i);
}
/**
 * puttercom - prints comams and space
 * @i: first number
 * @j: second number
 * @k: third number
 * @l: fourth number
 *
 * Return: nothing
 */
void puttercom(int i, int j, int k, int l)
{
	if (i < 57 || j < 57 || k < 57 || l < 57)
	{
		putchar(',');
		putchar(' ');
	}
}
