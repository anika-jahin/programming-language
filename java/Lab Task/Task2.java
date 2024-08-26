/*Question: Write the Java code of a program that reads the radius of a circle and prints its circumference and  area.  
    
Example 1:  
Sample Input:  
4  
Sample Output:  
Area is 50.26548245743669  
Circumference is 25.132741228718345  

Example 2:  
Sample Input:  
3.5  
Sample Output:  
Area is 38.48451000647496  
Circumference is 21.991148575128552  

 */

import java.util.Scanner;

public class Task2 {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);

        System.out.println("Enter the radius of the circle: ");
        double radius = sc.nextDouble();
        //double pi=3.1416;

        double area = Math.PI*radius*radius;
        double cir = 2*Math.PI*radius;

        System.out.println("Area is " + area);
        System.out.println("Circumference is " + cir);

        sc.close();
    }
    
}
