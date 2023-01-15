package baekjoon_practices;
import java.util.Scanner;

public class Practice11050 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num1 = sc.nextInt();
		int num2 = sc.nextInt();
		int comb=1;
		
		for(int i=0;i<num2;i++) {
			comb *= num1-i;
		}
		for(int i=num2;i>1;i--) {
			comb/=i;
		}
		System.out.println(comb);
		
	}
}
