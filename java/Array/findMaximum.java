class maximum{
    void max(){
        int[] array = {4,7,1};
         int ans=0;
        for(int i=0;i<array.length;i++)
        {
            if(array[i]>ans)
            {
                ans=array[i];
            }
        }
        System.out.println("Maximum value: " + ans);
    }
}

public class findMaximum {
    public static void main(String[] args) {
        maximum obj = new maximum();
        obj.max();
    }
}
