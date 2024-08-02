//Question:write a program to find the last occurence of element x in a given array

import java.util.Scanner;

public class countElement {

        static void lastOccurrence(int[]array,int x){

            int lastIndex=-1;
            for(int i=0;i<array.length;i++){
                if(array[i]==x){
                    lastIndex = i;
                }
            }
            System.out.println(lastIndex);
        }
    
        static void coutOccurrences(int[]array,int x){
            int count=0;
            for(int i=0;i<array.length;i++){
                if(array[i]==x){
                    count++;
                }
            }
            System.out.println(count);
        }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of array: ");
        int n=sc.nextInt();

        int[] array= new int[n];
        System.out.println("Enter the element of array: ");
        for(int i=0;i<array.length;i++){
            array[i]=sc.nextInt();
        }

        System.out.println("Enter the value of x: ");
        int x=sc.nextInt();

        System.out.println("The number of occurrence is: ");
        coutOccurrences(array,x);

        System.out.println("Last occurrence of the array is: ");
        lastOccurrence(array,x);

        sc.close();
    }
}
