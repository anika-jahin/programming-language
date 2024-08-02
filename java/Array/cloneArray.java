import java.util.Arrays;
import java.util.Scanner;

public class cloneArray {
     static void printArray(int[]array1){
  
        for(int i=0;i<array1.length;i++){
            System.out.print(array1[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
    
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of array: ");
        int n=sc.nextInt();
        int[] array1=new int[n];

         System.out.println("Enter the element of array: ");
         for(int i=0;i<array1.length;i++){
            array1[i]=sc.nextInt();
         }

         System.out.println("Original array: ");
         printArray(array1);

        // int[] array2=array1.clone(); 
         int[] array2=Arrays.copyOf(array1, array1.length);//we can also use this function for copy array;
         //int[] array2=Arrays.copyOfRange(array1,0,array1.length);//here we can use range of array for copy.


         /*when we use clone() then array2 allocate another memory .
         Thats why when we change the element of array2 ,the original array1 is remain unchanged
         */
         System.out.println("Copied array: ");
         printArray(array2);

         array2[0]=0;
         array2[1]=1;
         array2[2]=2;

         System.out.println("Original array after changing: ");
         printArray(array1);

         System.out.println("Copied array after changing : ");
         printArray(array2);

         
         sc.close();
        
    }

}
