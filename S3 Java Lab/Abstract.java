abstract class Shape{
    abstract void numberOfSides();
}
class Rectangle extends Shape{
    void numberOfSides(){
        System.out.println("Number of sides is 4");
    }
}

public class Abstract {
    public static void main(String[] args) {
        Shape a ;
        a = new Rectangle();
        a.numberOfSides();
      

    }
}
