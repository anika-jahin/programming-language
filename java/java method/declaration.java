
public class declaration {
    public int sum(int a,int b){  //declaration of method
        //code to be executed
        int ans= a+b;
        return ans;
    }
    public static void main(String[] args) {
        int a=5;
        int b=10;
        declaration obj=new declaration(); //creating object
       int ans= obj.sum(a,b); //call the method
        System.out.println(ans);
    }
}

/*1.Method signature: 
        method name + parameter
        #sum(int a,int b)
  2.Access specifier: 
        Specify the access of the method
        4 types of access specifier in java
        1.public , 2.private , 3.protected, 4.Default
  
 */