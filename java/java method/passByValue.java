public class passByValue {
    
     static void changeValue(int a){ 
     /*static is an access modifier.if we use it we need not to create an object to print.
     we can print the value normally call the method */ 
        a *=10;
        System.out.println("Inside changing value: " +a);
    }
    public static void main(String[] args) {
        int a=10;
        System.out.println("Before changing value: " + a); //ans is 10
        changeValue(a);
        System.out.println("After changing value: " + a);
        /*ans is 10.Because we call the method through
        pass by value.In changeValue method int a is a new variable in a new address*/
    }
}
