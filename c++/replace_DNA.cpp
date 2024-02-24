#include <iostream>
#include <string>
using namespace std;

string replaceDNA(const string& s) {
    string result;
    for (int i = 0; i < s.length(); i += 2) {
        if (s[i] == '0' && s[i + 1] == '0') {
            result += 'A';
        } else if (s[i] == '0' && s[i + 1] == '1') {
            result += 'T';
        } else if (s[i] == '1' && s[i + 1] == '0') {
            result += 'C';
        } else if (s[i] == '1' && s[i + 1] == '1') {
            result += 'G';
        } else {
            cerr << "Invalid input character(s) detected." << endl;
            exit(1);
        }
    }
    return result;
}

int main() {
    string s;
    cout << "Enter the DNA string (with 0s and 1s): ";
    cin >> s;

    if (s.length() % 2 != 0) {
        cerr << "Error: Length of the input string must be even." << endl;
        return 1;
    }

    string result = replaceDNA(s);
    cout << "Resulting DNA string after replacement: " << result << endl;

    return 0;
}
