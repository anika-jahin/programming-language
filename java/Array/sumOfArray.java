class sum{

    void add(){
        int[] array={3,6,10};
        int summation=0;
        for(int i=0;i<array.length;i++)
        {
             summation += array[i];

        }
        System.out.println(summation);
    }
}

public class sumOfArray {
    public static void main(String[] args) {
      sum obj=new sum();
        obj.add();
    }
    
}
