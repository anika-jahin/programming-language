import java.util.Scanner;
public class takingInputInArray {
    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter size of array: ");
        int n;
        n=sc.nextInt();
        int[] array = new int[n];
        System.out.println("Enter the element of array:");
        for(int i=0;i<array.length;i++)
        {
            array[i]=sc.nextInt();
            System.out.print(array[i] + " ");
        }
        sc.close();
    }
}
