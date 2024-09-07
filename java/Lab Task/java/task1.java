import java.util.Scanner;
public class task1{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the string: ");
        String s=sc.nextLine();
        
        String rev="";
        char c;
        int n=s.length();
      for(int i=0;i<n;i++)
      {
        c=s.charAt(i);
        rev=c+rev;
       
      }
      System.out.println("The reverse of the string is:  " + rev);
      sc.close();
        
    }
}