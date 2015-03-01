/*
* author: ejaetan
*
* If we list all the natural numbers below 10 that are multiples of 3 or 5, 
* we get 3, 5, 6 and 9. The sum of these multiples is 23.
*
* Find the sum of all the multiples of 3 or 5 below 1000.
*/


#include <stdio.h>

/*
* This is the correct solution but its efficiency can be improved.
*
*
* Critiques on this solution.
* 1. The program has to go through every amount from 0 to n-1 in order
*    to get the right answer, which is pretty time consuming. 
* 
*/

int main()
{
	int i, a;
	int b = 0;
	
	
	for (i = 0; i < 1000; i++){
		if(i%3 == 0 || i%5 == 0){
			a = i;
			b = a + b;
		}	
		
		
	}
	
	printf("%d\n", b);			
	
	return 0;
}


/* Better Solution */
int sum_of_multiply_of_n(int target, int n)
{
	int p; 
	
	//Find the largest number below the given number x, so it's (x-1)
	target = target -1; 
	
	//find the total n factors of target
	p = target / n;
	
	//count the sum_of_multiply_of_n 
	return (n * (p * (p + 1)) /2);
}

int main(){
	int target = 1000;
	int sum;
	
	sum = (sum_of_multiply_of_n(target,3) + sum_of_multiply_of_n(target,5) 
		  - sum_of_multiply_of_n(target,15));
	
	printf("%d\n", sum);
	
	return 0;
}