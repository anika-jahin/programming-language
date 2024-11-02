public class Shape {
    public String name;
    public double base,height,Area;
    public Shape(String name,double base,double height){
        this.name=name;
        this.base=base;
        this.height=height;
    }
    public void area(){
        if(name=="Triangle"){
             Area= 0.5*base*height;
            System.out.println("Area: "+Area);
        }else if(name=="Square"){
            Area=base*base;
            System.out.println("Area: "+Area);
        }else if(name=="Rhombus"){
            Area=(base*height)/2;
            System.out.println("Area: "+ Area);
        }else if(name=="Rectangle"){
            Area=base*height;
            System.out.println("Area: "+Area);
        }else if(name=="Trapezium"){
            System.out.println("Area: Shape unknown");
        }
    }
    public static void main(String[] args) {
        Shape triangle = new Shape("Triangle", 10, 25);
        triangle.area();
        System.out.println("==========================");
        Shape square = new Shape("Square", 10, 10);
        square.area();
        System.out.println("==========================");
        Shape rhombus = new Shape("Rhombus", 18, 25);
        rhombus.area();
        System.out.println("==========================");
        Shape rectangle = new Shape("Rectangle", 15, 30);
        rectangle.area();
        System.out.println("==========================");
        Shape trapezium = new Shape("Trapezium", 15, 30);
        trapezium.area();    }
}
