#include <stdio.h>

int main(){
	char array[1000];
	char c, i = 0;
	long a = -1, product = 1;
	int n = 13;

	
	while((c = getchar()) != EOF){		
		if(c == '\n')
			continue;
			
		if(c != '0'){
			array[i] = c - '0';
			product *= array[i];
			printf("%ld\n", product);
			i++;	
		} else {	
			product = 1;
			i = 0;	
		}
		
		if(i == n && product > a){
			a = product;
			printf("12: %ld\n", a);
		}
			
		if(i > n){
			product /= array[i - n - 1];
			if(product > a)
				a = product;
			printf("13: %ld\n", a);
		}
	}
	
	printf("%ld\n",a);
}