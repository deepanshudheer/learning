#include <iostream>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int sum = 0;
    int count = 0;
    int num = 2; 

    while (count < n) {
        if (isPrime(num)) {
            sum += num;
            ++count;
        }
        ++num;
    }

    std::cout << "Sum of the first " << n << " prime numbers: " << sum << std::endl;

    return 0;
}
