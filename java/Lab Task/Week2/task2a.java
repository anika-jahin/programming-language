import java.util.Scanner;
public class task2a {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter 2 number: ");
        int a=sc.nextInt();
        int b=sc.nextInt();
        System.out.println(a+"*"+b+"="+(a*b));
        System.out.println(a+"/"+b+"="+( a/b));

        sc.close();
    }
}
