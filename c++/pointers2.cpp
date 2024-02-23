#include <iostream>
using namespace std;

int s1(int n) {
    cout << "address of n1 in s1(): " << &n << endl;
    n *= n;
    return n;
}

void s2(int *n) {
    cout << "address of n2 in s2(): " << n << endl;
    *n *= *n;
}

void s3(int &n) {
    cout << "address of n3 in s3(): " << &n << endl;
    n *= n;
}

int main() {
    int num = 5;
    
    cout << "Original value of num: " << num << endl;
    
    int result1 = s1(num);
    cout << "Result of s1: " << result1 << endl;
    cout << "Value of num after s1: " << num << endl; // num remains unchanged

    s2(&num);
    cout << "Value of num after s2: " << num << endl; // num is modified

    s3(num);
    cout << "Value of num after s3: " << num << endl; // num is modified
    
    return 0;
}
