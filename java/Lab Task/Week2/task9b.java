/* Create a program that determines shipping cost based on weight and distance: 
less than 5 kg, more than 5 kg but less than 20 kg, and more than 20 kg. */
import java.util.Scanner;

public class task9b {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter weight and distance: ");

        double weight=sc.nextDouble();//kg
        double distance =sc.nextDouble();//km
        double Cost=0;

        if(weight<5){
            Cost=distance*0.5;
        }else if(weight>5 && weight<20){
            Cost=distance*1.0;
        }else if(weight>20){
            Cost=distance*1.5;
        }

        System.out.println("The shipping cost is : " +Cost);
        
        sc.close();
    }
}
