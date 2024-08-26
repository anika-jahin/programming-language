/*Question: Write the Java code of a program that reads two numbers, 
subtracts the smaller number from the  larger one, and prints the result.  
Hint: First, we may check which number is greater  

Sample Input 1:  
-40  
-4  
Sample Output 1:  
36  
Explanation: -4 > -40 so -4 - (-40) = -4 + 40 = 36  

Sample Input 2:  
6  
2  
Sample Output 2:  
4  

Sample Input 3:  
5  
5  
Sample Output 3:  
0 
 */

import java.util.Scanner;

public class task4 {
     public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);

         System.out.println("Enter the value of A: ");
         int A=sc.nextInt();
         System.out.println("Enter the value of B: ");
         int B=sc.nextInt();

        if(A>B){
            int sub = A-B;
            System.out.println(sub);
        }else if(A<B){
            int sub=B-A;
            System.out.println(sub);
        }else{
            int sub = A-B;
            System.out.println(sub);
        }

         sc.close();
    }
}
