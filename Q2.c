#include <stdio.h>

long fibotail(long n, long a, long b);

int main()
{
	long i = 0;
	long a,b,c,d;
	
	while (fibotail(i, 0, 1) < 4000000)
		i++;
	a = --i;

	for (b = 0; b <= a; b++)
	{
		c = fibotail(b, 0 , 1);
		if(c%2 == 0)
			d = d+c;
	}
	printf("%ld\n", d);
	
	return 0;	
		
}

long fibotail(long n, long a, long b)
{
	if (n == 0)
		return a;
	else if (n == 1)
		return b;
	else if (n > 1)
		return fibotail(n-1, b, a+b);	
}