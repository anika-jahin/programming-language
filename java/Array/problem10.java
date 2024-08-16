//Question: Sort an array consisting only 0s and 1s

import java.util.Scanner;
public class problem10{
    
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

    static int[] sortedArray(int[] array){
        int count=0;
        for(int i=0;i<array.length;i++){
            if(array[i]==0){
                count++;
            }
        }
        for(int i=0;i<array.length;i++){
            if(i<count){
                array[i]=0;
            }else{
                array[i]=1;
            }
        }
        
        return array;
    }

    static int[] sortingMethod2(int[] array){ //optimized way to sort the array
        int right=array.length-1;
        int left=0;
        while(left<right){
            if(array[left]==1 && array[right]==0){
                swap(array,left,right);
                left++;
                right--;
            }
            if(array[left]==0){
                left++;
            }
            if(array[right]==1){
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

        sortedArray(array);
        System.out.println("Sorted array is:");
        printArray(array);

        sortingMethod2(array);
        System.out.println("Sorted array method 2 is : ");
        printArray(array);
        sc.close();
    }
}
