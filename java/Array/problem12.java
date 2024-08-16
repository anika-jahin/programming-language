/*Question: Given an integer array 'a' sorted in non-decreasing order
  return an array of the sqaures of each number sorted in non decreasing order
 */

import java.util.Scanner;

public class problem12 {
    
    static void printArray(int[] array){
        for(int i=0;i<array.length;i++){
            System.out.print(array[i] + " ");
        }
        System.out.println();
    }

    static void swap(int[] array,int i,int j){
        int temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
    }

    static int[] sort(int[]array){ //sort the square array in non decreasing order using bubble sort algorithm
        for(int i=0;i<array.length-1;i++){
            for(int j=0;j<array.length-1;j++){
                if(array[j]>array[j+1]){
                    swap(array,i,j);
                }
            }
        }
        return array;
      }
  
      
        static int[] sqareArray(int[] array){
            for(int i=0;i<array.length;i++){
              array[i]=array[i]*array[i];
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

        sqareArray(array);
        sort(array);
        System.out.println("sorted array: ");
        
        printArray(array);
        sc.close();
    }
}
