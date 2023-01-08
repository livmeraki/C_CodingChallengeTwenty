import java.util.Scanner;
class Practice10871
{
 public static void main(String[] args)
 {
  Scanner myObj = new Scanner(System.in);
  int num1 = myObj.nextInt();
  int num2 = myObj.nextInt();
  int[] myArr = new int[num1];
  for(int i=0;i<num1;i++){
    myArr[i] = myObj.nextInt();
  }
  for(int i=0;i<num1;i++){
    if(myArr[i]<num2){
      System.out.println(myArr[i]);
    }
  }  
 }
} 