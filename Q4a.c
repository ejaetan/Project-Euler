#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int palin(int c);
void itoa(int n,char s[]);
void reverse (char s[]);

int main()
{
	long a,b,c,e;
	int i = 0;
	int s[1];

	

	for(a = 999; a <= 999 && a => 100; a--)
	{
		for(b = 999; b <= 999 && b => 100; b--)
		{
			c = a * b;
			if(palin(c) == 1)
			{
				s[i++] = c;
				if(s[1] > s[0])
				{
					s[0] = s[1];
					--i;
				}
				else if (
					--i;
			}
		}			
	}
	printf("%c\n",s[0]);

}		
		
int palin(int c)
{
	int e;
	char d[7];
	
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