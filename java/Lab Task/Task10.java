/*Quesiton: Write a Java program to compute and display a person’s weekly salary as determined by the following conditions:  
● If the hours worked is less than or equal to 40, then the person receives Tk 200 per hour.  
● If the hours worked is greater than 40, then the person receives Tk 8000 plus Tk 300 for  each hour worked over 40 hours.  
The program should request the hours worked as an input from the user and display the salary as  output. You need to make
 sure that user input is valid. For example, a person cannot work for -5  hours or more than 168 hours in a week. 
 So, the valid hours range is 0 to 168. For invalid hours,  print outputs as given in the samples below.  
Hint: you can consider the hour (user input) to be an integer 

Sample Input 1:  
100  
Sample Output 1:  
26000  
============
Sample Input 2:  
30  
Sample Output 2:  
6000  
=============
Input 3:  
-30  
Sample Output 3:  
Hour cannot be negative  
==============
Sample Input 4:  
170  
Sample Output 4:  
Impossible to work more than 168 hours weekly 

 */

import java.util.Scanner;

public class Task10 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int hour=sc.nextInt();

        if(hour>0 && hour <=168)
        {
            if(hour<=40){
                int salary=200*hour;
                System.out.println(salary);
            }else if(hour>40){
                int salary= (8000+((hour-40)*300));
                System.out.println(salary);
            }
        }else if(hour<0){
            System.out.println("Hour cannot be negative");
        }else if(hour>168){
            System.out.println("Impossible to work more than 168 hours weekly");
        }
        System.out.println();
        sc.close();
    }
}
