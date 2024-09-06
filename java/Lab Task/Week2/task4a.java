import java.util.Scanner;
public class task4a{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter height: ");
        int height =sc.nextInt();
        System.out.println("Enter weight: ");
        double weight=sc.nextDouble();
        System.out.println("Enter eye color:");
        sc.nextLine();
        String eye_color=sc.nextLine();
        System.out.println("Height= "+height +" "+ "Weight = " + weight + " " +"Eye color= " + eye_color);
        sc.close();
    }
}
