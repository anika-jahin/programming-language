import java.util.Scanner;
public class task2 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String first=sc.nextLine();
        int length=first.length();
        int n=sc.nextInt();
        char ch,ch1;
        String rev="",str="";
        

        for(int i=0;i<=n;i++){
            ch=first.charAt(i);
           rev=ch+rev;
        }
        for(int i=n+1;i<length;i++){
            ch1=first.charAt(i);
            str +=ch1;
        }
        System.out.println(str);
        System.out.println(rev+str);
        sc.close();

    }
}
