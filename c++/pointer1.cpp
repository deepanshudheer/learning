#include <iostream>

using namespace std;

int main() {
    int num = 5;
    int *p = &num;
    cout << p << endl;
    cout << &num << endl;
    cout << *p << endl;
    
    return 0;
}
