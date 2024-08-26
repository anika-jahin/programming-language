/*Write the Java code of a program that reads an integer, and prints the integer it is a multiple of  
either 2 or 5 but not both. If the number is a multiple of 2 and 5 both, then print "Multiple of 2  and 5 both".
 For all other numbers, the program prints "Not a multiple we want".  
For example, 2, 4, 5, 6, 8, 12, 14, 15, 16, 18, 22 … i.e. this includes multiples of 2 only and multiples of 5 only, 
NOT multiples of 2 and 5 both or other numbers.  
 
Sample Input 1:  
6  
Sample Output 1:  
6  
====

Sample Input 2:  
10  
Sample Output 3:  
Multiple of 2 and 5 both  
==================

Sample Input 4:  
17  
Sample Output 4:  
Not a multiple we want

 */

import java.util.Scanner;

public class Task7 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number: ");
        int n=sc.nextInt();
        if(n%2==0 && n%5==0){
            System.out.println("Multiple of 2 and 5 both");
        }else if(n%2==0 || n%5==0){
            System.out.println(n);
        }else{
            System.out.println("Not a multiple we want");
        }

        sc.close();
    }
}
