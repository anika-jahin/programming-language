import java.util.Scanner;

public class task9a {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        
        System.out.println("Enter age: ");
        int age=sc.nextInt();

        System.out.println("Enter height: ");// height in cm
        int height=sc.nextInt();
        
        if(age>12 && height>=122){ 
            System.out.println("You can ride a rollar coaster");
        }
        else{
            System.out.println("You cannot ride a rollar coaster");
        }
        sc.close();
    }
}
