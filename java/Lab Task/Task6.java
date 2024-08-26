/*Question: Write the Java code of a program that reads an integer as input from the user, and prints the integer  
if it is a multiple of 2 OR 5 and prints "Not a multiple of 2 OR 5" otherwise.  
For example, 2, 4, 5, 6, 8, 10, 12, 14, 15, 16, 18, 20, 22 … i.e. this includes multiples of 2 only,
  multiples of 5 only and multiples of 2 and 5 both.  

Sample Input 1:  
5  
Sample Output 1:  
5  

Sample Input 3:  
3  
Sample Output 3:  
Not a multiple of 2 OR 5 

 */

import java.util.Scanner;
public class Task6 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number: ");
        int n=sc.nextInt();
        if(n%2==0 || n%5==0){
            System.out.println(n);
        }else{
            System.out.println("Not a multiple of 2 OR 5");
        }

        sc.close();
    }
    
}
