 class ArrayEx{
     void declaration(){
        int[] ages = new int[5];
        float[] weights=new float[5];
        String[] names = new String[5];
        ages[0]=10;
        ages[1]=31;
        ages[2]=50;
        
        weights[0]=20;
        weights[1]=53;

        names[0]="Anika";

        System.out.println(ages[0]);
        System.out.println(weights[0]);
        System.out.println(names[0]);
    
    }
}

public class syntaxArray {
    public static void main(String[] args) {
        ArrayEx obj = new ArrayEx();
        obj.declaration();
    }
}
