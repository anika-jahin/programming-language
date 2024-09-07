//Write a program that keeps asking the user for a number until they enter -1, then stops.
import java.util.Scanner;
public class task12a {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter number : ");
        int number;
        do{
            number=sc.nextInt();
        }while(number!=-1);
        System.out.println("Finished");
        sc.close();
    }
}
