//question: search the given element x in the array. if present then return the index else return -1;

class search{
    void searchArray(){
        int[] array = {3,49,4,5,10};
        int x=10;
        int ans=-1;
        for(int i=0;i<array.length;i++)
        {
            if(array[i]==x)
            {
                ans=i;
                break;
            }
        }
        System.out.println("Index" + ans);
        
    }
}

public class searchElement {
    public static void main(String[] args) {
        search obj = new search();
        obj.searchArray();
    }
}
