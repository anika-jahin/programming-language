//Question: Write a programm to check the array is sorted or not.

import java.util.Scanner;

public class sortedArray {
    
    static boolean isSorted(int[]array){
        boolean check=true;
        for(int i=1;i<array.length;i++){
            if(array[i]<array[i-1]){
                check=false;
                break;
            }
        }
        return check;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of an array:");
        int n=sc.nextInt();

        int[] array=new int[n];
        System.out.println("Enter the element of array:");
        for(int i=0;i<array.length;i++){
            array[i]=sc.nextInt();
        }
    
        System.out.println("Is sorted: " + isSorted(array));
        sc.close();
    }
}
