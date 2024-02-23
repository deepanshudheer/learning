#include <iostream>
using namespace std;

int main() {
    int size; 
    int *arr = new int[size];
    cout << "Enter size: " << endl;
    std::cin >> size;
    cout << "Enter elements: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    delete arr;
    cout << "Deleted *arr" << endl;
    return 0;
}
