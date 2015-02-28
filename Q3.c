/*
* author: ejaetan
*
* The prime factors of 13195 are 5, 7, 13 and 29.
* What is the largest prime factor of the number 600851475143 ?
*/

#include <stdio.h>
#include <math.h>

long prime(long a);

int main()
{
	long i = 600851475143;
	long a,b,c;
	
	printf("%lu\n", i);
	
	
	for (a = 2; a < i/2 ; a++){
		if(i%a == 0){		/* is whole number */
			if (prime(a) == 0) /* not prime */
				continue;
			else if (prime(a) == 1)		/* is prime */
				b = a;
		}
	}
	
	printf("%ld\n",b);
	
	

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

// ans: 6857