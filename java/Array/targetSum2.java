/*Question: Count the number of triplets whose sum is equal to the given value x */

import java.util.Scanner;
public class targetSum2 {

    static int Sumtriplets(int[]array,int target){
        int ans=0;
        for(int i=0;i<array.length;i++){
            for(int j=i+1;j<array.length;j++){
                for(int k=j+1;k<array.length;k++){
                    if(array[i]+array[j]+array[k]==target){
                        ans++;
                    }
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

        System.out.println("The number of triplet is: " +Sumtriplets(array,target));
        sc.close();
    }
}
