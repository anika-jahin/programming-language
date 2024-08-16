/*Question: Given an array of integers 'a',move all the even integers at the beginning of the array
 followed by all the odd integers. The relative order of odd or even integers does not matter.
 Return any array that satisfies the condition.
 */

import java.util.Scanner;

public class problem11 {

    static void printArray(int[] array){
        for(int i=0;i<array.length;i++){
            System.out.print(array[i] + " ");
        }
        System.out.println();
    }

    static void swap(int[] array,int i,int j){
        int temp=array[i];
        array[i]=array[j];
        array[j]=temp;
    }

    static int[] sorted(int[] array){
        int left=0,right=array.length-1;
        while(left<right){
            if(array[left]%2!=0 && array[right]%2==0){
                swap(array,left,right);
                left++;
                right--;
            }
            if(array[left]%2==0)
            {
                left++;
            }
            if(array[right]%2!=0)
            {
                right--;
            }
        }
        return array;
    }
    
     public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int n=sc.nextInt();

        int[] array=new int[n];
        System.out.println("Enter the element of array: ");
        for(int i=0;i<n;i++){
            array[i]=sc.nextInt();
        }

        System.out.println("Original array is:");
        printArray(array);

        sorted(array);
        System.out.println("sorted array: ");
        printArray(array);
        sc.close();
    }
}
