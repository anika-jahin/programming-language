import java.util.Scanner;

public class problem6 {


    static void swapSum(int a,int b){
        System.out.println(" value of a and b before swap: ");

        System.out.println("a= " +a + " , " + "b= "+b);

        a=a+b;
        b=a-b;
        a=a-b;
        
        System.out.println(" value of a and b after swap: ");
        System.out.println("a= " +a + " , " + "b= "+b);
    }

    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the value of a: ");
        int a=sc.nextInt();
        System.out.println("Enter the value of b: ");
        int b=sc.nextInt();
        swapSum(a,b);
            sc.close();
        }
     }

