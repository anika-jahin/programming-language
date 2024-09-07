//Create a while loop that finds the greatest common divisor (GCD) of two numbers.

import java.util.Scanner;

public class task11b {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter first number: ");
        int a=sc.nextInt();
        System.out.println("Enter second number: ");
        int b=sc.nextInt();
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }

        System.out.println("The GCD is " + a);
        sc.close();
    }
}
