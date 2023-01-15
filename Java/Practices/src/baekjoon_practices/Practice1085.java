package baekjoon_practices;
import java.util.Scanner;
public class Practice1085 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int x = sc.nextInt(), y= sc.nextInt();
		int w= sc.nextInt(), h = sc.nextInt();
		int min = x;
		//w-x  x  h-y  y
		if(w-x<min) {
			min = w-x;
		} 
		if(h-y<min) {
			min = h-y;
		} 
		if(y<min) {
			min = y;
		}
		System.out.println(min);
	}
}
