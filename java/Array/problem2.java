//Question: Write a program to find the smallest and largest array from an unsorted array.
import java.util.Arrays;
import java.util.Scanner;

public class problem2 {
    static int[] smallestAndLargestElement(int[] array){
        Arrays.sort(array);
        int[] ans= {array[0],array[array.length-1]};
        return ans;
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
        
        int[] ans=smallestAndLargestElement(array);
        System.out.println("Smallest: " +ans[0]);
        System.out.println("Largest: " +ans[1]);
        sc.close();
    }
}
