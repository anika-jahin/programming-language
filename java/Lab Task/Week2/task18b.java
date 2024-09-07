//Create a function that calculates and returns the area of a circle given its radius.
import java.util.Scanner;
public class task18b {
    public static double area(double radius){
        double result=3.1416*radius*radius;
        return result;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the radius of circle: ");
        double radius=sc.nextDouble();
        double ans=area(radius);
        System.out.println("Area of a circle: " +ans);
        sc.close();

    }
}
