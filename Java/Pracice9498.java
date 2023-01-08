package JavaCC20;
import java.util.Scanner;
public class Pracice9498 {
	public static void main(String[] arg) {
		Scanner sc = new Scanner(System.in);
		int grade = sc.nextInt();
		if(grade>=90) {
			System.out.println("A");
		}
		else if(grade>=80) {
			System.out.println("B");
		}
		else if(grade>=70) {
			System.out.println("C");
		}
		else if(grade>=60) {
			System.out.println("D");
		}
		else{
			System.out.println("F");
		}
		
	}
}
