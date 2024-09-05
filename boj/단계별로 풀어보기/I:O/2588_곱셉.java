import java.util.Scanner;
public class Main {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		
		int a;
		String b;
		
		a = scan.nextInt();
		b= scan.next();
		
		int arr[] = new int[3];
		
		for(int i=0;i<3;i++){
			arr[i] = b.charAt(2-i) - '0';
			System.out.println(a*arr[i]);
		}
		System.out.print(a*arr[2]*100 +a*arr[1]*10+a*arr[0]);
	}
}
