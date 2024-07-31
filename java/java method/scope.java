//Scope: A region from where a variable can be accessed 

//Class level scope
class classLevel{
    int a=10;//member variable of this class. This variable is accessible anywhere in the class
    int b=5;

    int add(){
        return a+b;
    }
    int mul(){
        return a*b;
    }
}

//Method level scope

/*These are the variables that are declared inside
the method and cannot be accessed outside the method */ 

class methodLevel{
    int a=10;//member variable of this class. This variable is accessible anywhere in the class
    int b=5;

    int add(){      
        int x=1;    
        int y=9;
        return x+y;     // this x an y variable cannot be accessed outside add mehtode
    }
    int mul(){
        return a*b;
    }
}

/*Block level scope of variable:
        These are the variables that are the declared inside
        the pair of brackets '{ 'and '}'
*/

class blockLevel{
    void Block(){
    int a=5;
    System.out.println(a);

    {
        int b=10;
        System.out.println(b);//we cannot access b anywhere outside the block.
    }
  }
}



public class scope {
    public static void main(String[] args) {
        classLevel obj1 =new classLevel();
       int res1= obj1.add();
       int res2=obj1.mul();
       System.out.println(res1);
       System.out.println(res2);

       methodLevel obj2 =new methodLevel();
       int res3=obj2.add();
       int res4=obj2.mul();
       System.out.println(res3);
       System.out.println(res4);

    
        blockLevel obj=new blockLevel();
        obj.Block();
    }
}
//In scope variable name is unique