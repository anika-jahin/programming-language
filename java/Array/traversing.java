class loop{

    void forLoop(){
        int[] ages={10,4,30};
        for(int i=0;i<ages.length;i++){
            System.out.print(ages[i] + " ");
            //System.out.println();
        }
    }
    void forEachLoop(){ //we can print only full array but we can not print partial array.
        int[] ages ={5,7,20};

        for(int age : ages){
            System.out.print(age + " ");
        }
    }

    void whileLoop(){
        int[] ages = { 1,5,30};
        int i=0;
        while(i<ages.length)
        {
            System.out.print(ages[i] + " ");
            i++;
        }
    }

    void nestedLoop(){
        int[][] ages = {{4,5,1},{6,8,10}};
        for(int i=0;i<ages.length;i++)
        {
            for(int j=0;j<ages[i].length;j++){
                System.out.print(ages[i][j] + " ");
            }
        }
    }
}

public class traversing{
    public static void main(String[] args) {
        loop obj = new loop();
        obj.forLoop();
        obj.forEachLoop();
        obj.whileLoop();
        obj.nestedLoop();
    }
    
}
