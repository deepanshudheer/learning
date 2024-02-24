#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount you want to withdraw: ";
    cin >> amount;

    if (amount % 100 != 0) {
        cout << "Please enter an amount in multiples of 100." << endl;
        return 1;
    }

    int notes500 = amount / 500;
    amount %= 500;
    int notes200 = amount / 200;
    amount %= 200;
    int notes100 = amount / 100;

    cout << "Dispensing cash denominations:" << endl;
    if (notes500 > 0) {
        cout << "500 Rupees Notes: " << notes500 << endl;
    }
    if (notes200 > 0) {
        cout << "200 Rupees Notes: " << notes200 << endl;
    }
    if (notes100 > 0) {
        cout << "100 Rupees Notes: " << notes100 << endl;
    }

    return 0;
}
