//Write a function named `max` that takes two numbers as arguments and returns the larger of them.
import java.util.Scanner;
public class task18a {
    public static int max(int x,int y){
        if(x>y){
            return x;
        }else
        {
            return y;
        }
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter two numbers: ");

        int a=sc.nextInt();
        int b=sc.nextInt();
        int result=max(a,b);
        System.out.println("The larger number is: "+ result);
        sc.close();
    }
}
