import java.util.Scanner;
public class task6a{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a: ");
        int a=sc.nextInt();
        System.out.println("Enter b: ");
        int b=sc.nextInt();
        System.out.println("Reminder= " + (a%b));
        sc.close(); 

    }
}
