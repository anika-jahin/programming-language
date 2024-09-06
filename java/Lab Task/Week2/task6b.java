import java.util.Scanner;
public class task6b {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter a number: ");
        int a=sc.nextInt();
        int x=a;
        int incre=++a;
        int dec=--x;
        System.out.println("Increment: " + incre); // pre-increament
        System.out.println("decrement: " + dec);//pre-decreament
        sc.close();
    }
}
