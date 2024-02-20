import java.util.Scanner;

class Con {
    private int a;
    
    public Con(int a) {
        this.a = a;
    }
    
    int disp() {
        return a;
    }
}

public class Main {
    public static void main (String[] args) {
        Con c = new Con(9);
        System.out.println("Number: " + c.disp());
    }
}
