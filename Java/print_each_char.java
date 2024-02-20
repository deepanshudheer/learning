import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String[] word;
        int i;
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String inputString = scanner.nextLine();
        
        word = new String[inputString.length()];
        for (int i = 0; i < inputString.length(); i++) {
            word[i] = String.valueOf(inputString.charAt(i));
        }
        for (l = 0; l < word.length; l++) {
            System.out.println(word[l]);
        }
        scanner.close();
    }
}
