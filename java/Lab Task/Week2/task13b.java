//Create a while loop that prints numbers from 1 to 10 but skips numbers divisible by 5.

public class task13b {
    public static void main(String[] args) {
        for(int i=1;i<=10;i++){
            if(i%5==0){
                continue;
            }
            System.out.println(i);
        }
    }
}
