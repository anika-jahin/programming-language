/*Question: Reverse an array consisting of integer values */

import java.util.Scanner;
public class problem7 {

    static void reverseArray(int[]array){

        for(int i=array.length-1;i>=0;i--){
            System.out.print(array[i] + " ");
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of an array: ");
        int n=sc.nextInt();

        System.out.println("Enter the element of the array: ");
        int[] array= new int[n];
        for(int i=0;i<array.length;i++){
            array[i]=sc.nextInt();
     
        }
        System.out.println("The reversed array is:  ");
        reverseArray(array);
        sc.close();
    }
}
