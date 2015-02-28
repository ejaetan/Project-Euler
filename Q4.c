/* 
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
	long a,b,c,e;
	
	
	for(a = b = 999; (100 <= a && 100 <= b)  &&  (b <= 999 && a <= 999); a--, b = 999)
	{
		c = a * b;
		//printf("%ld\n", c);
		if(palin(c) == 1)
		{
			printf("The answer is %ld\n.", c);
			break;
		}
		else if (palin(c) == 0)
			for(b--;(100 <= a && 100 <= b)  &&  (b <= 999 && a <= 999); b--) {
				//printf("%ld\n", c);
				c = a * b;
				if(palin(c) == 1)
				{
					printf("The answer is %ld\n.", c);
					break;
				}
			}
	}
}

int palin(int c)
{
	int e;
	char d[1000000];
	
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
	long c, i, j;
	
	for(i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
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
	s[i++] = n % 10 + '0';
	s[i] = '\0';

}