//Write a for loop that prints all numbers from 1 to 10 except 4 and 7.
public class task13a {
    public static void main(String[] args) {
        for(int i=1;i<=10;i++){
            if(i==4){
                continue;
            }
            System.out.println(i);
        }
    }
}
