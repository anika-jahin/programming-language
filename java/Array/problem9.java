//Question: Given Q queries, check if the given number is present in the array or not.
//Note: Value of all the elements in the array is less than 10 to the power 5.

import java.util.Scanner;

public class problem9 {

    static int[] makeFrequencyArray(int[]array){
        int[] freq=new int[100005];
        for(int i=0;i<array.length;i++)
        {
            freq[array[i]]++;
        }
        return freq;
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

        int[] freq=makeFrequencyArray(array);

        System.out.println("Enter number of quries: ");
        int q=sc.nextInt();

        while(q>0){
            System.out.println("Enter number to be searched:");
            int x=sc.nextInt();

            if(freq[x]>0){
                System.out.println("yes");
            }else{
                System.out.println("No");
            }

            q--;
        }
        
        sc.close();
    }
}
