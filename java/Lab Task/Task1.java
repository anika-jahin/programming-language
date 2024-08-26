/*Question: Write the Java code of a program that reads two numbers from the user, and prints their sum, 
 product, and difference.  
Hint: subtract the second number from the first one  

Example 1:  
Sample Input:  
4  
5  
Sample Output:  
Sum = 9  
Product = 20  
Difference = -1  

Example 2:  
Sample Input:  
30  
2  
Sample Output:  
Sum = 32  
Product = 60  
Difference = 28  

 */

import java.util.Scanner;

public class Task1 {
    public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);

         System.out.println("Enter the value of A: ");
         int A=sc.nextInt();
         System.out.println("Enter the value of B: ");
         int B=sc.nextInt();

         int sum=A+B;
         int product=A*B;
         int subtract=A-B;

         System.out.println("Sum: " + sum);
         System.out.println("Product: " + product);
         System.out.println("Difference: " + subtract);

         sc.close();
    }
    
}
