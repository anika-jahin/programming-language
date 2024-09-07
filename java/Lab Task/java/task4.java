import java.util.Scanner;
public class task4 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the string: ");
        String s=sc.nextLine();
        int n=s.length();
        String str="",str1="",str2="";
        char ch,ch1,ch2;
        for(int i=n;i>n-1;i--){
            ch=s.charAt(i);
            str+=ch;
        }
        if(str=="er"){
            for(int i=0;i<n-1;i++){
                ch1=s.charAt(i);
                str1+=ch1;
            }
            System.out.println(str1+"est");
        }else if(str=="est"){
            for(int i=0;i<n-1;i++){
                ch2=s.charAt(i);
                str2+=ch2;
            }
            System.out.println(str2);
        }
        else if(n<4){
            System.out.println(s);
        }else if(n>3){
            System.out.println(s+"er");
        }
      sc.close();
        
    }
}
