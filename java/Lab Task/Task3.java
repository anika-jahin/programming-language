/*Question: Write the Java code of a program that reads two numbers from the user. 
The program should then  print "First is greater" if the first number is greater,
 "Second is greater" if the second number is  greater, and "The numbers are equal" otherwise. 
 
 Sample Input 1:  
7  
3  
Sample Output 1:  
First is greater  

Sample Input 2:  
-33  
-3  
Sample Output 2:  
Second is greater  

Sample Input 1:  
11  
11  
Sample Output 1:  
The numbers are equal  

 */
 

import java.util.Scanner;

public class Task3 {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the value of A: ");
        int A=sc.nextInt();
        System.out.println("Enter the value of B: ");
        int B=sc.nextInt();

        if(A>B){
            System.out.println("First is greater.");
        }else if(A<B){
            System.out.println("Second is greater.");
        }else{
            System.out.println("The numbers are equal.");
        }
        sc.close();
    }
}
