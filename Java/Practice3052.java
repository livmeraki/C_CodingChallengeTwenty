package JavaCC20;
import java.util.Scanner;

public class Practice3052 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[] a = new int[10];
		int[] rem = new int[]{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
		int count=0;
		
		for(int i=0;i<10;i++) {
			a[i] = sc.nextInt();
			for(int j=0;j<=i;j++) {
				if(rem[j]==a[i]%42) {
					break;
				} else if(j==i) {
					rem[j]= a[i]%42;
					count++;
				}
			}
		}
		
		System.out.println(count);
		

	}

}
