import java.util.Scanner;
public class task4b {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter student Id: ");
        int id=sc.nextInt();
        boolean isStudent=true;
        System.out.println("Student Id: " +id +" "+ "student: " + isStudent);
        sc.close();
    }
}
