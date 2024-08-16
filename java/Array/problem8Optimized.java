import java.util.Scanner;

public class problem8Optimized {


    static void swap(int[] array,int a,int b){ //swap to element in the array 
        int temp=array[a];
        array[a]=array[b];
        array[b]=temp;
    }


    static void reverseInplace(int[] array,int i,int j){ // reverse the array without using extra array.its called reverse array inplace
        while(i<=j){
            swap(array,i,j);
            i++;
            j--;
        }
    }



    static void rotateInplace(int[] array, int k){ // rotate the array  by k step without using extra array.
        int n=array.length;
         k=k%n;
        reverseInplace(array,0,n-k-1);
        reverseInplace(array,n-k,n-1);
        reverseInplace(array,0,n-1);
    }


    static void printArray(int[] array){ // print the array
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
        
        rotateInplace(array,k);

        System.out.println("Array after rotation: ");
        printArray(array);

        sc.close();
    }
}
