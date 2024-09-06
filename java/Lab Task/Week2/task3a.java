import java.util.Scanner;
public class task3a {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);  // Create a Scanner object to take user input
        System.out.println("Enter a: ");// print a massege for taking input a
        int a=sc.nextInt();// Read the first integer input and store it in variable 'a'
        System.out.println("Enter b: ");// print a massege for taking input b
        int b=sc.nextInt();// Read the first integer input and store it in variable 'b'
        System.out.println("Sum= " + (a+b));//add two number and print the result as sum
        sc.close(); //close the scanner object to prevent resource leak

    }
    
}
