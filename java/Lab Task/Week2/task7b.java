import java.util.Scanner;

public class task7b {
       public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the title of book: ");
        String title=sc.nextLine();

        System.out.println("Enter the name of author: ");
        String author=sc.nextLine();

        System.out.println(title + " by " + author);
        sc.close(); 

    }
}
