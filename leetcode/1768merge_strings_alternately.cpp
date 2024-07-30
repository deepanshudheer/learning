class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        const int m = word1.size(), n = word2.size();
        string res;

        for (int i = 0; i < m || i < n; i++) {
            if (i < m) {
                res += word1[i];
            }
            if (i < n) {
                res += word2[i];
            }
        }
        return res;
    }
};
