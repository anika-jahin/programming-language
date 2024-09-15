public class Student {
    String name;
    double avg;
    public Student(String name){
        this.name=name;
    }
    public Student(){
        System.out.println("Hello default student");
    }

    public double quizcalc(double n){
         avg=n/3;
        return avg;
    }

    public void printDetail(){
        
        System.out.println("Your average quiz is"+"\n"+avg);
    }

    public double quizcalc(double n1,double n2){
         avg=(n1+n2)/3;
        return avg;
    }

    public double quizcalc(double n1,double n2,double n3){
         avg=(n1+n2+n3)/3;
        return avg;
    }

    public void printDetail(String name) {
        System.out.println("Hello " + name);
        System.out.println("Your average quiz score is: " + avg);
    }
    
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.quizcalc(10);
        System.out.println("--------------------------------");
        s1.printDetail();

        Student s2 = new Student("Harry");
        s2.quizcalc(10, 8);
        System.out.println("--------------------------------");
        s2.printDetail(s2.name);
        Student s3 = new Student("Hermione");
        s3.quizcalc(10, 9, 10);
        System.out.println("--------------------------------");
        s3.printDetail(s3.name);
    }
}
