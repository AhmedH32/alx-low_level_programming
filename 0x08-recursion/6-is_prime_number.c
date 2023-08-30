#include "main.h"

int actual_prime(int n, int j)
{
	    if (j < n)
		            if (n % j == 0)
				                return (0);
	            else
			                return (actual_prime(n, j + 1));
	        if (n == j)
			        return (1);
}
int is_prime_number(int n)
{
	    if (n <= 1)
		            return (0);
	        return(actual_prime(n, 2));
}
