import java.util.Scanner;

class Shape {
    public double area() {
        return 0;
    }
}

class Circle extends Shape {
    private double radius;
    
    public Circle(double radius) {
        this.radius = radius;
    }
    
    public double area() {
        return Math.PI * radius * radius;
    }
}

class Square {
    private double side;
    
    public Square(double side) {
        this.side = side;
    }
    
    public double area() {
        return side * side;
    }
}

public class Main {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter circle or square: ");
        String shapeType = sc.next().toLowerCase();
        
        if (shapeType.equals("circle")) {
            System.out.println("Enter radius: ");
            double radius = sc.nextDouble();
            Circle circle = new Circle(radius);
            System.out.println("Area of circle: " + circle.area());
        } else if (shapeType.equals("square")) {
            System.out.println("Enter side of square: ");
            double side = sc.nextDouble();
            Square square = new Square(side);
            System.out.println("Area of square: " + square.area());
        } else {
            System.out.println("no");
        }
        sc.close();
    }
}
