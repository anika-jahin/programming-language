/*Write a program that initializes an array of characters (a string) and changes a specific character,
 then prints the original and modified string.*/

public class task15b {
    public static void main(String[] args) {
        char[] ch = {'L', 'A', 'B', ' ', 'T', 'A', 'S', 'K'};
        String array = new String(ch);

        System.out.println("Original string: " + array);

        ch[2] = 'C';
        String modifiedString = new String(ch);

        System.out.println("Modified string: " + modifiedString);
        
    }
}
