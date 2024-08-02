//Question:write a program to find the  strictly greater element than x in a given array

import java.util.Scanner;
public class problem1 {
    
    static void greaterArray(int[]array,int x){
    int count=0;
    for(int i=0;i<array.length;i++){
        if(array[i]>x){
            count++;
        }
    }
    System.out.println(count);
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
        System.out.println("Enter the value of x: ");
        int x=sc.nextInt();

        System.out.println("The number of greater element is: ");
        greaterArray(array,x);
        sc.close();
    }
}
