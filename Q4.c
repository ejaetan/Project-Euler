/* 
* author: ejaetan 
*
* A palindromic number reads the same both ways. The largest palindrome 
* made from the product of two 2-digit numbers is 9009 = 91 × 99.
* Find the largest palindrome made from the product of two 3-digit numbers. 
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int palin(int c);
void itoa(int n,char s[]);
void reverse (char s[]);

int main()
{
	int a,b,c;
	int e = 0;

	for(a = 999; a <= 999 && a >= 100; a--)
	{
		for(b = 999; b <= 999 && b >= 100; b--)
		{
			c = a * b;
			if(palin(c) == 1)
			{
				if(e < c)
					e = c;
			}
		}			
	}
	printf("%d\n", e);
	
	return 0;
}		
		
int palin(int c)
{
	int e;
	char d[100];
	
	itoa(c, d);
	reverse(d); 
	e = atoi(d);
	if (e == c)
		return 1;
	else
		return 0;
	
}

void reverse (char s[])
{
	int c, k, j;
	
	for(k = 0, j = strlen(s) - 1; k < j; k++, j--)
	{
		c = s[k];
		s[k] = s[j];
		s[j] = c;
	}
}

void itoa(int n,char s[])
{

	static int i = 0;

	if (n < 0){
		n = -n;
		s[i++] = '-';
	}
	
	if (n/10)
		itoa(n/10, s);
	else
		i = 0;
	
	s[i++] = n % 10 + '0';
	s[i] = '\0';

}