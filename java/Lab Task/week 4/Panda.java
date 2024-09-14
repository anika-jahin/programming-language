public class Panda{

    String name;
    String gender;
    int age;

    public Panda(String name,String gender,int age){
        this.name=name;
        this.gender=gender;
        this.age=age;
    }

    public String sleep(int hour , String food){
        return name +" sleeps "+hour+" hours daily and should have "+food;
    }
    
    public String sleep(){
        return name+" duration is unknown thus should have only bamboo leaves";
    }
    public static void main(String[] args) {
        Panda panda1 = new Panda("Kunfu", "Male", 5);
        Panda panda2 = new Panda("Pan Pan", "Female",3);
        Panda panda3 = new Panda("Ming Ming", "Female",8);
        
        System.out.println(panda1.name+ " is a "+panda1.gender+ " Panda Bear who is " + panda1.age+" years ago");
        System.out.println(panda2.name+ " is a "+panda2.gender+ " Panda Bear who is " + panda2.age+" years ago");
        System.out.println(panda3.name+ " is a "+panda3.gender+ " Panda Bear who is " + panda3.age+" years ago");
        System.out.println("===========================");

        System.out.println(panda2.sleep(10,"Broccoli Cicken"));
        System.out.println(panda1.sleep(4,"Mixed Veggies"));
        System.out.println(panda3.sleep());
    }
}
