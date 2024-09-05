import java.util.Scanner;
public class Main{

	static int arr[][] = new int[31][31];
	
	public static int fibo(int n, int m){
		if(n==m || m==0) return 1;
		if(arr[n][m] >0) return arr[n][m];
		return arr[n][m] = fibo(n-1,m) + fibo(n-1,m-1); 
	}
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int t,n,m;
		t=scan.nextInt();
		
		for(int i=0;i<t;i++){
			n =scan.nextInt();
			m= scan.nextInt();
			System.out.println(fibo(m,n));
		}
	}
}
