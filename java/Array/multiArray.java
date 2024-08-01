class Array{

    void declaration(){
        //int[][] arr=new int[3][4];
        int[][] arr1= {{10,4,1},{5,2,4}};//2D array
        
        System.out.println(arr1[0][0]);
        System.out.println(arr1[0][1]);
        System.out.println(arr1[0][2]);
        System.out.println(arr1[1][0]);
        System.out.println(arr1[1][1]);
        System.out.println(arr1[1][2]);

        int[][][] arr2= {{{4,2},{1,5}},{{10,6},{3,8}},{{13,9},{20,5}}}; //3D array
        System.out.println(arr2[0][0][0]);
        System.out.println(arr2[0][1][0]);
        System.out.println(arr2[1][0][1]);
    }
}


public class multiArray {
    public static void main(String[] args) {
        Array obj = new Array();
        obj.declaration();
    }
    
}
