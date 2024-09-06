import java.util.Scanner;

public class task7a {
     public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter City: ");
        String city=sc.nextLine();

        System.out.println("Enter Country: ");
        String country=sc.nextLine();

        String location= city + " , " + country;

        System.out.println("Location: " + location);
        sc.close(); 

    }
}
