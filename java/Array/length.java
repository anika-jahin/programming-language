class Array{

    void arrayLength(){
        int[] ages ={10,40,35};
        float[] weight = {19,50,35,64};
        String[] names = {"Anika","Tasnim"};

        System.out.println(ages.length);
        System.out.println(weight.length);
        System.out.println(names.length);
    }
}

public class length{

    public static void main(String[] args) {
     
        Array obj = new Array();
        obj.arrayLength();
    }
}
