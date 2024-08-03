/*Question: Find the unique number in a given array where
  all the elements are being repeated twice with one value being unique;
 */

import java.util.Scanner;

public class problem3 {

    static int uniqueElement(int[]array){
        int ans=-1;
        for(int i=0;i<array.length;i++){
            for(int j=i+1;j<array.length;j++){
                if(array[i]==array[j]){
                    array[i]=-1;
                    array[j]=-1;
                }
            }
        }

        for(int i=0;i<array.length;i++){
            if(array[i]>0){
                ans=array[i];
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
            System.out.println("The unique number is: " +uniqueElement(array));
            sc.close();
        }
    }
