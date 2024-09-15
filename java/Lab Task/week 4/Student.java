public class Student{

    String name;
    String department;
    int id;
    int dailyEffortHours;

    public Student(String name,int id){
        this.name=name;
        this.id=id; 
        this.department="CSE";
    }
    public void dailyEffort(int hour){
        this.dailyEffortHours=hour;
        System.out.println("Daily Effort: "+hour+" hour(s)");
        
    }
    public void printDetails(){
        System.out.println("Name: "+name);
        System.out.println("ID:"+id);
        System.out.println("Department: "+department);
        System.out.println("Daily Effort:"+dailyEffortHours+" hour(s)");
        if(dailyEffortHours<=2){
            System.out.println("Suggestion: Should give more effort!");
        }else if(dailyEffortHours>2 &&dailyEffortHours<=4){
            System.out.println("Suggestion: Keep up the good work");
        }else{
            System.out.println("Suggestion: Excellent! Now motivate others.");
        }
        
    }
    public Student(String name,int id,String department){
        this.name=name;
        this.id=id;
        this.department=department;
       
    }
    public static void main(String[] args) {
        Student harry = new Student("Harry Potter", 123); 
        harry.dailyEffort(3); 
        harry.printDetails(); 
        System.out.println("========================"); 

        Student john = new Student("John Wick", 456, "BBA"); 
        john.dailyEffort(2); 
        john.printDetails(); 
        System.out.println("========================"); 

        Student naruto = new Student("Naruto Uzumaki", 777, "Ninja"); 
        naruto.dailyEffort(6); 
        naruto.printDetails(); 
    }
}