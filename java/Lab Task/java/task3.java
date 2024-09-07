import java.util.Scanner;
public class task3 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a string: ");
        String str=sc.nextLine();
        int n=str.length();
        char ch;
        int count=0;
        for(int i=0;i<n;i++){
            ch=str.charAt(i);
            if(ch=='0' || ch=='1'){
                count++;
            }
        }
        if(count==n){
            System.out.println("Binary number");
        }else{
            System.out.println("Not a Binary number");
        }
        sc.close();
    }
}
