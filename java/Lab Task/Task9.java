/*Question: Write the Java code of a program that finds the number of hours, minutes, 
and seconds in a given  number of seconds. The number of seconds is taken as input from the user.  
Sample Input 1:  
10000  
Sample Output 1:  
Hours: 2 Minutes: 46 Seconds: 40  
==========================================================  Sample Input 2:  
500  
Sample Output 2:  
Hours: 0 Minutes: 8 Seconds: 20

*/
import java.util.Scanner;
public class Task9 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int sec=sc.nextInt();

        int hour= sec/3600; //1 hour=3600 sec
        sec=sec%3600;
        int min=sec/60; //1 min= 60 sec
        sec=sec%60;
        
        System.out.println("Hours: " + hour +" "+"Minutes: " + min+" " +"Seconds: "+ sec);
        sc.close();
    }
}
