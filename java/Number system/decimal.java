import java.util.Scanner;

public class decimal{

    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter binary number: ");
        int binary_num=sc.nextInt();

        int ans=0; //converted decimal number
        int power=1;// 2^0=1;

        while(binary_num>0)
        {
            int unit_digit=binary_num%10;
            ans=ans+(unit_digit*power);
            binary_num /=10;
            power =power*2;
        }
        System.out.println(ans);
        sc.close();
    }
}