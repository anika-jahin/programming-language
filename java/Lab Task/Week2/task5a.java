import java.util.Scanner;
public class task5a{
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter a integer number: ");
        int num1=sc.nextInt();
        System.out.println("Enter a float number: ");
        double num2=sc.nextDouble();
        int num = (int) num2;
        System.out.println("Integer number: " + num1 );
        System.out.println(" After typecasting the float number: " + num );
        sc.close();

    }
}
