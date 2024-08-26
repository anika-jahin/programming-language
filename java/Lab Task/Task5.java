/*Question: Write the Java code of a program that reads a number, and prints "The number is even" or "The  number is odd",
 depending on whether the number is even or odd.  
hint(1): we may use the modulus (%) operator to check for even or odd  
hint(2): we can consider the number to be an integer  
 */

import java.util.Scanner;
public class Task5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int n=sc.nextInt();
        if(n%2==0){
            System.out.println("Ther number is even");
        }else if(n%2!=0){
            System.out.println("The number is odd");
        }

        sc.close();
    }
}
