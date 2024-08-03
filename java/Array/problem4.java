/*Question: Find the second largest element in the given array. */

import java.util.Scanner;

public class problem4 {

    static int secondLargest(int[]array){
        
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);

        System.out.println("Enter the size of an array: ");
        int n=sc.nextInt();

        int[] array=new int[n];
        System.out.println("Enter the element of the array: ");
        for(int i=0;i<array.length;i++){
            array[i]=sc.nextInt();
        }
            System.out.println("The unique number is: " +secondLargest(array));
            sc.close();
        }
}
