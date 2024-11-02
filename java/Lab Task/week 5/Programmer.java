public class Programmer {
    public String name;
    public String lang;
    public int year,x;
    public Programmer(String name,String lang,int year){
        this.name=name;
        this.lang=lang;
        this.year=year;
        System.out.println("Horray! A new programmer is born");
    }
    public void printDetails(){
        
        System.out.println("Name: "+ name);
        System.out.println("Language: "+ lang);
        System.out.println("Experience: "+year+"years.");
    }
    public void addExp(int years){
        year+=years;
        System.out.println("Updating experience of Jon Snow");
        
    }
    public static void main(String[] args) {
        Programmer p1 = new Programmer("Ethen Hunt", "Java", 10);
        p1.printDetails();
        System.out.println("--------------------------");
        Programmer p2 = new Programmer("James Bond", "C++", 7);
        p2.printDetails();
        System.out.println("--------------------------");
        Programmer p3 = new Programmer("Jon Snow", "Python", 4);
        p3.printDetails();
        p3.addExp(5);
        p3.printDetails();
    }
}
