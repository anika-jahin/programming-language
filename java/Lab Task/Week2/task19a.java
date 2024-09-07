//Write a function that takes a string and an integer (name and age) and prints a greeting message.

import java.util.Scanner;

public class task19a {
    public static void greetings(String name,int age){
        System.out.println("Hi, "+name + "! " + "You are "+age +" years old.Welcome to our program!");
    }
    public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
        System.out.println("Enter name: ");

        String name=sc.nextLine();
        System.out.println("Enter age: ");
        int age=sc.nextInt();
        greetings(name,age);
        sc.close();
    }
}
