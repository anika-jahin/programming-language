import java.util.Scanner;
public class task5b{
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter a float number: ");
        double num2=sc.nextDouble();
        int num = (int) num2;
        System.out.println("Original part: " + num2 );
        System.out.println(" After typecasting the float number: " + num );
        sc.close();
    }
}