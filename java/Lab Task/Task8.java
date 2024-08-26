/*Question: Write the Java code of a program that reads an integer, and prints the integer if it is 
a multiple of  2 AND 5 and prints "Not multiple of 2 and 5 both" otherwise.
Sample Input 1:  
30  
Sample Output 1:  
30  
================
Sample Input 2:  
15  
Sample Output 2:  
Not multiple of 2 and 5 both  
=======================

*/

import java.util.Scanner;

public class Task8 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number: ");
        int n=sc.nextInt();
        if(n%2==0 && n%5==0){
            System.out.println(n);
        }else if(n%2==0 || n%5==0){
            System.out.println("Not multiple of 2 and 5 both");
        }

        sc.close();
    }
}
