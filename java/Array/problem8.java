/*Question: Rotate the given array by k step.when k is non negative.k can be greater than n */

import java.util.Scanner;

public class problem8 {
    static int[] rotateArray(int[]array,int k){
        int n=array.length;
         k=k%n;
         int[] ans=new int[n];
         int j=0;
        for(int i=n-k;i<n;i++){
            ans[j++]=array[i];
        }
        for(int i=0;i<n-k;i++){
            ans[j++]=array[i];
        }
        return ans;
    }
    static void printArray(int[] array){
        for(int i=0;i<array.length;i++){
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
        System.out.println("Enter the k step: ");
        int k=sc.nextInt();

        System.out.println("The original array is:  ");
        printArray(array);
        System.out.println();
        int[] ans= rotateArray(array,k);
        System.out.println("Array after rotation: ");
        printArray(ans);
        sc.close();
    }
}
