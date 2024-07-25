import java.util.Scanner;
public class suminput {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Two number:");
        int x=sc.nextInt();
        int y=sc.nextInt();
        int sum=x+y;
        System.out.println("summation= "+sum);
        sc.close();
    }
    
}
