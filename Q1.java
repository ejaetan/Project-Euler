public class Q1 {
	public static void main (String[] args){
	
	int target = 1000;
	int sum;
	
	sum = sumOfMultiplyOfN(target,3) + sumOfMultiplyOfN(target,5) - 
		  sumOfMultiplyOfN(target,15);
	
	System.out.println(sum);
	
	}

	public static int sumOfMultiplyOfN(int target, int n){
		int p;
	
		target = target - 1;
		p = target/n;
	
		return (n * (p * (p + 1)) /2);
	}

}