public class Main {
    public static boolean isPrime(int number) {
        if (number <= 1) {
            return false;
        }
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static int reverseNumber(int number) {
        int reversedNumber = 0;
        while (number != 0) {
            int digit = number % 10;
            reversedNumber = reversedNumber * 10 + digit;
            number /= 10;
        }
        return reversedNumber;
    }

    public static boolean isEmirp(int number) {
        if (isPrime(number)) {
            int reversedNumber = reverseNumber(number);
            return isPrime(reversedNumber) && reversedNumber != number;
        }
        return false;
    }

    public static void main(String[] args) {
        int number = 13; 
        if (isEmirp(number)) {
            System.out.println(number + " is an emirp.");
        } else {
            System.out.println(number + " is not an emirp.");
        }
    }
}
