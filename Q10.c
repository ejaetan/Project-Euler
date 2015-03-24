// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
// Find the sum of all the primes below two million.

#include <stdio.h>

long prime(long a);

int main()
{
	long a = 17, b = 8, d;
	int  c = 0;
	
	for( ; b > -1; b++)
	{
		if(prime(b) == 1)
		{
			printf("%ld\n",b);
			a += b;
			
			
			if(b > 2000000)
			{
				d = a - b;
				printf("%ld\n", d);
				c = 1;
			}
		}
		if(c == 1)
		{
			break;
		}
	}
	
	


}


long prime(long a)
{
	long n;
	
	if (a % 2 == 0)
		return 0;
	
	for(n=2; n <= (a/2) + 1; n++){
		if(a % n == 0)
			return 0;
	}
	return 1;
}