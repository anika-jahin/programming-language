import java.util.Scanner;
public class task2b {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter first name: ");
        String firstName=sc.nextLine();
        System.out.println("Enter last name: ");
        String lastName=sc.nextLine();
        System.out.println(firstName + " " + lastName);
        sc.close();
    }
    
}
