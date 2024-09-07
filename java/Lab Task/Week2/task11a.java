//Write a program that calculates the factorial of a number using a while loop.
import java.util.Scanner;
public class task11a {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number: ");
        int n=sc.nextInt();
        int i=1;
        int fact=1;
        while(i<=n)
        {
            fact*=i;
            i++;
        }
        System.out.println("The factorial is: "+fact);
        sc.close();
    }
}
