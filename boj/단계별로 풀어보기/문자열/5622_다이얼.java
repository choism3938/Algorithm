import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		String S  =scan.next();
		int arr[]  = new int[S.length()];
		int sum =0;
		int cnt=0;
		
		for(int i=0; i<S.length();i++){
			arr[i] = S.charAt(i);
		}	
		for(int i=0;i<S.length();i++){
			if(arr[i] == 'A' || arr[i] == 'B' || arr[i] == 'C'){
				arr[i] = 2;
				continue;
			}
			if(arr[i] == 'D' || arr[i] == 'E' || arr[i] == 'F'){
				arr[i] = 3;
				continue;
			}
			if(arr[i] == 'G' || arr[i] == 'H' || arr[i] == 'I'){
				arr[i] = 4;
				continue;
			}
			if(arr[i] == 'J' || arr[i] == 'K' || arr[i] == 'L'){
				arr[i] = 5;
				continue;
			}
			if(arr[i] == 'M' || arr[i] == 'N' || arr[i] == 'O'){
				arr[i] = 6;
				continue;
			}
			if(arr[i] == 'P' || arr[i] == 'Q' || arr[i] == 'R'|| arr[i] == 'S'){
				arr[i] = 7;
				continue;
			}
			if(arr[i] == 'T' || arr[i] == 'U' || arr[i] == 'V'){
				arr[i] = 8;
				continue;
			}
			if(arr[i] == 'W' || arr[i] == 'X' || arr[i] == 'Y'|| arr[i] == 'Z'){
				arr[i] = 9;
				continue;
			}
		}
		for(int i=0;i<S.length();i++){
			cnt += arr[i]+1;
		}
	System.out.print(cnt);	
	}
}