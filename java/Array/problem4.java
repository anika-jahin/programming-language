/*Question: Find the second largest element in the given array. */

import java.util.Scanner;

public class problem4 {

    static int Largest(int[]array){
        int mx=Integer.MIN_VALUE;
        for(int i=0;i<array.length;i++){
            if(array[i]>mx){
                mx=array[i];
            }
        }
        return mx;
    }

    static int secondLargest(int[]array){
        int max = Largest(array);

        for(int i=0;i<array.length;i++){
            if(array[i]==max){
                array[i]=Integer.MIN_VALUE;
            }
        }
        int SecondMax=Largest(array);
        return SecondMax;
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

            System.out.println("The largest element is: " +Largest(array));

            System.out.println("The Second largest element is: " +secondLargest(array));
            sc.close();
        }
}
