#include <stdio.h>

void second_fib(unsigned long i, unsigned long j);
/**
* main - entry
*
* Return: 0
*/
int main(void)
{
	unsigned long i = 1, j = 2, k, tmp;

	for (k = 0; k < 90; k++)
	{
		printf("%lu, ", i);

		tmp = j;
		j = i + j;
		i = tmp;
	}
	printf("%lu, ", i);
	second_fib(i, j);

	return (0);
}
/**
 * second_fib - repeat the first task but much more complex
 * @i: first fib no
 * @j: second fib no
 *
 * Return: void
 */
void second_fib(unsigned long i, unsigned long j)
{
	int k;
	unsigned long i2, j2, overflow, tmp;

	i2 = i % 1000000000000;
	j2 = j % 1000000000000;
	i /= 1000000000000;
	j /= 1000000000000;
	overflow = (i2 + j2) / 1000000000000;
	tmp = j;
	j = i + j + overflow;
	i = tmp;
	tmp = j2;
	j2 = (i2 + j2) % 1000000000000;
	i2 = tmp;
	for (k = 0; k < 7; k++)
	{
		if (k < 6)
		{
			printf("%lu", i);
			printf("%lu, ", i2);
		}
		else
		{
		printf("%lu", i);
		printf("%lu\n", i2);
		}


		overflow = (i2 + j2) / 1000000000000;
		tmp = j;
		j = i + j + overflow;
		i = tmp;
		tmp = j2;
		j2 = (i2 + j2) % 1000000000000;
		i2 = tmp;
	}
}
