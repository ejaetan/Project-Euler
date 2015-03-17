/*
* author: ejaetan
* 
* A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
*
* a^2 + b^2 = c^2
* For example, 3^2 + 4^2 = 9 + 16 = 25 = 52.
*
* There exists exactly one Pythagorean triplet for which a + b + c = 1000.
* Find the product abc.
*
*/


#include <stdio.h>
#include <math.h>

int coprime1(int m, int n);
int isodd(int m, int n);
int coprime2(int a, int b, int c);

int main ()
{
	int m = 5, n = 2;
	int a = 0, b = 0, c = 0;
	int d;
	
	
	for(m = 5; m > n && (d != 1); m++)
	{
		for(n = 2; m > n && (d != 1); n++)
		{
			
			if(isodd(m,n) == 0)	//determine if m - n is odd
				continue;
			
			if(coprime1 == 0)	//determine if m and n is coprime
				continue;
			
			a = pow(m,2) - pow(n,2);
			b = 2 * m * n;
			c = pow(m,2) + pow(n,2);
			
			if(a > b && b > c)	// determine if a > b > c
				continue;
			
			if(coprime2 == 0)
				continue;
			
			if(a + b + c == 1000)
			{
				printf("%d\n", a * b * c);
				d = 1;
			}	
		}	
	}
	return 0;			
			
			
}

int coprime2(int a, int b, int c)
{
	if((c % b == 0) && (c % a == 0) && (b % a == 0) && (b % a == 0))
		return 0;
	else
		return 1;	
}

int coprime1(int m, int n)
{
	if(m % n == 0)
		return 0;
	else 
		return 1;
}

int isodd(int m, int n)
{
	int a;
	
	a = m - n;
	
	if(a % 2 == 0)
		return 0;
	else 
		return 1; 
}