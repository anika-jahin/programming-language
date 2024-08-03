/*Question: program to find the total number of pairs in the arrays
 whose sum is equal to the given target.
 */

import java.util.Scanner;

public class targetSum {

    static int Sum(int[]array,int target){
        
        int ans=0;
        for(int i=0;i<array.length;i++)
        {
            for(int j=i+1;j<array.length;j++)
            {
                if(array[i]+array[j]==target){
                    ans++;
                }
            }
        }
        return ans;
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);

        System.out.println("Enter the size of an array: ");
        int n=sc.nextInt();

        int[] array=new int[n];
        System.out.println("Enter the element of the array: ");
        for(int i=0;i<array.length;i++){
            array[i]=sc.nextInt();
        }

        System.out.println("Enter the targer value: ");
        int target=sc.nextInt();

        System.out.println("Ans is: " +Sum(array,target));
        sc.close();
    }
    
}
