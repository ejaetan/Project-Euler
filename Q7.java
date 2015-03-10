/*
* By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, 
* we can see that the 6th prime is 13.
* What is the 10001st prime number?
*/

public class Q7 {
	public static void main(String[] args)
	{
		int a, n;
		int count = 6;
	
	//test:	
		for(a = 14; ;a++){
			if(isprime(a))
				count++;
			if (count == 10001){
				System.out.println(a);
				break;
			}
		}
	}
		



	public static boolean isprime(int a)
	{
		int n;
	
		if (a % 2 == 0)
		return false;
	
		for(n=2; n <= (a/2) + 1; n++){
			if(a % n == 0)
				return false;
		}
		return true;
	}
}