/*
* author: ejaetan
*
* 2520 is the smallest number that can be divided by each of the numbers 
* from 1 to 10 without any remainder.
*
* What is the smallest positive number that is evenly divisible by
* all of the numbers from 1 to 20?
*/

#include <stdio.h>
#include <math.h>

/*
* This is the correct solution but its efficiency can be improved.
*
*
* Critiques on this solution.
* 1. This is a brute forced algorithm. 
* 
*/

void original_solution(void);
int better_solution(int start, int end);
int prime(int a);

int main()
{
	
	printf("%d\n", better_solution(1,20));
	
	
}

void original_solution(void)
{
	int a, i = 0;
	
	for(a = 2, i = 2521; a <= 20; i++)
		{
		while(i%a == 0){
			a++;
			if(a == 20)
			printf("%d\n", i);		
		}
		if(a > 20)
			break;
		else 
			a = 2;	
	}
}

/* 
* Better Solution 
*
* Use prime factorization and log to calculate the exponent for each prime 
* to cut down the iteration steps.
*/

int better_solution(int start, int end)
{
	
	int result;
	int m;
	int limit = sqrt(end);
	
	
	for(result = 1; start <= end; start++){
		if(prime(start) == 1 && start <= end){
			if(start <= limit){
				m = floor(log(end) / log(start));
				result *= pow(start, m);
			}
			else 
				result *= start;
		}	
		else
			continue;	
		
	}
	return result; 	
	
	

}

int prime(int a)
{
	int n;
	
	if (a == 2)
		return 1;
	
	if (a % 2 == 0)
		return 0;
	
	for(n=2; n <= (a/2) + 1; n++){
		if(a % n == 0)
			return 0;
	}
	return 1;
}
