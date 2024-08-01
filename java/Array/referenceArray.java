import java.util.Scanner;
class array{
    void reference(){
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the size of array: ");
        int n=sc.nextInt();
        System.out.println("Enter the element of array: ");
        int[] arr1=new int[n];
        for(int i=0;i<arr1.length;i++){
            arr1[i]=sc.nextInt();
        }

        System.out.println("original array: ");
        for(int i=0;i<arr1.length;i++){
            System.out.print(arr1[i] + " ");
        }
            System.out.println();
        //trying to copy
        int[] arr2=arr1;
        System.out.println("copied array:");
        for(int i=0;i<n;i++){
            System.out.print(arr2[i] + " ");
        }

        arr2[0]=0;
        arr2[1]=0;
        System.out.println();
        System.out.println("original array after changing the element of arr2: ");
        for(int i=0;i<arr1.length;i++){
            System.out.print(arr1[i] + " ");
        }
        System.out.println();

        System.out.println("copied array after changing the element of arr2:");
        for(int i=0;i<n;i++){
            System.out.print(arr2[i] + " ");
        }

        sc.close();

    }
}

public class referenceArray {
    
    public static void main(String[] args) {
        array obj = new array();
        obj.reference();
    }
}
