//Create a function that takes two float parameters (base and height) and calculates the area of a triangle.

import java.util.Scanner;

public class task19b {
    public static double area(double a,double b){
        double result=a*b;
        return result;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the base: ");
        double base=sc.nextDouble();
        System.out.println("Enter height: ");
        double height=sc.nextDouble();
        double ans=area(base,height);
        System.out.println("Area of a rectangle: " +ans);
        sc.close();

    }
}
