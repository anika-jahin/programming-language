//Create an array of 6 integers, print them, reverse the array, then print it again.
public class task15a {
    public static void main(String[] args) {
        int[] array={1,2,4,5,6,7};
        System.out.println("Original array:");
        for(int i=0;i<array.length;i++){
            System.out.print(array[i]+" ");
        }
        System.out.println();
        System.out.println("Reversed array: ");
        for(int i=array.length-1;i>=0;i--){
            System.out.print(array[i]+" ");
        }
    }
}
