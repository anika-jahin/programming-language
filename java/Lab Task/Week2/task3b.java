import java.util.Scanner;
public class task3b {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter length: ");
        int length=sc.nextInt();
        System.out.println("Enter width: ");
        int width=sc.nextInt();

        int area=length*width;
        /*The formula for calculating the area of a rectangle is:
          Area = Length * Width
          Here, we multiply the length and width values entered by the user
          to get the area of the rectangle. */
        System.out.println("Area= "+area);
        sc.close();
    }
}
