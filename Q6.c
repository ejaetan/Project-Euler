/*
* author: ejaetan
*
* The sum of the squares of the first ten natural numbers is,
* 1^2 + 2^2 + ... + 10^2 = 385
* 
* The square of the sum of the first ten natural numbers is,
* (1 + 2 + ... + 10)2 = 55^2 = 3025
*
* Hence the difference between the sum of the squares of the 
* first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
*
* Find the difference between the sum of the squares of the
* first one hundred natural numbers and the square of the sum.
*/

#include <stdio.h>
#include <math.h>

int sum_of_square(int target);
int square_of_sum(int target);
int recur_sum_sq(int n, int a, int b);

int main()
{
	int target = 100;
	int diff;
	
	diff = square_of_sum(target) - sum_of_square(target) ;
	
	printf("%d\n", diff);
	

}

/*
* So,
*	 1^2 + ... + 10^2 = 385
* 	11^2 + ... + 20^2 = 2485
* 	21^2 + ... + 30^2 = 6585
* 
* There is an obvious recursive pattern: Tn = Tn-1 + 2000 * (n-1) + 100
*/

int sum_of_square(int target)
{
	int n, a, b = 0, d = 0, i;
	int sum = 0;
	
	n = target/10;
	
	
	for (a = 1; a <= n; a++){
		if(a == 1){
			for(i = 1; i <= 10; i++)
				d += pow(i,2);	
		}
		else if(a > 1)
			b += recur_sum_sq(a, 0, d);
	}
	return sum = d + b;
	
}

int recur_sum_sq(int n, int a, int b)
{	
	if(n == 1)
		return b;
	else if (n > 1)
		return recur_sum_sq(n-1,b, b + 2000 * (n-1) + 100);
}

int square_of_sum(int target)
{
	int a;
	
	a = ((target * (target + 1)) / 2 );
	
	return pow(a,2);
}