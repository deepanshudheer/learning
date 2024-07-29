class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        int temp = 0, left = 0, right = str.length() - 1;
        while (left < right) {
            temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            
            left ++;
            right--;
        }
        return str;
    }
};
