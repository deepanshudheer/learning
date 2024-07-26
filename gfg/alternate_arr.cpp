class Solution {
  public:
    // arr[] is the array
    void print(vector<int> &arr) {
        // code here
        for (int i = 0; i < arr.size(); i += 2) {
            cout << arr[i] << " ";
        }
    }
};
