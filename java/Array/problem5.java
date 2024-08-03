/*Question: Given 2 integers a and b.swap them using a temporary variable */

import java.util.Scanner;
public class problem5 {

    static void swap(int a,int b){
        System.out.println("Original values before swap: ");
        System.out.println("a= " +a+" , " +"b= " +b);
        int x=a;
        a=b;
        b=x;
        System.out.println(" values after swap: ");
        System.out.println("a= " +a +" , "+"b= " +b);
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the value of a: ");
        int a=sc.nextInt();
        System.out.println("Enter the value of b: ");
        int b=sc.nextInt();
        swap(a,b);
        sc.close();
    }
}
