public class Patient {
    public String name;
    public int age;
    public double weight;
    public double height;
    public Patient(String name,int age,double weight,double height){
        this.name=name;
        this.age=age;
        this.weight=weight;
        this.height=height;
    }
    public void printDetails(){
        System.out.println("Name: "+ name);
        System.out.println("Age: "+ age);
        System.out.println("Weight: "+ weight+"kg");
        System.out.println("Height: "+ height+"cm");
        System.out.println("BMI: "+ (weight/(height/100*height/100)));
    }
    public static void main(String[] args) {
        Patient p1 = new Patient("A", 55, 63.0, 158.0);
        p1.printDetails();
        System.out.println("====================");
        Patient p2 = new Patient("B", 53, 61.0, 149.0);
        p2.printDetails();
    }
}
