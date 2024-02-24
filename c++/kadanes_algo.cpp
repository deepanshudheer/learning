#include <iostream>
using namespace std;

int main() {
    int a[6] = {-2, 1, -4, 2, -1, 3};
    int asize = sizeof(a) / sizeof(a[0]);
    int max_ending_here = 0, max_so_far = a[0];
    int start = 0, end = 0, temp_start = 0;
    
    for (int i = 0; i < asize; i++) {
        max_ending_here += a[i];
        
        if (max_ending_here < a[i]) {
            max_ending_here = a[i];
            temp_start = i;
        }
        
        if (max_ending_here > max_so_far) {
            max_so_far = max_ending_here;
            start = temp_start;
            end = i;
        }
    }
    
    cout << "Maximum contiguous sum is: " << max_so_far << endl;
    cout << "Subarray: ";
    for (int i = start; i <= end; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}
