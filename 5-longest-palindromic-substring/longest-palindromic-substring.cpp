

class Solution {
public:
    int solve(string &s, int i, int j,vector<vector<int>>&t){
        if (t[i][j] != -1) return t[i][j];
        if (i >= j) return t[i][j] = 1;
        if (s[i] == s[j]) return t[i][j] = solve(s, i + 1, j - 1,t);
        return t[i][j] = 0;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        if (n <= 1) return s;

        int sp = 0;
        int maxLen = 1;
        vector<vector<int>> t(1001, vector<int>(1001, -1));
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (solve(s, i, j, t) && j - i + 1 > maxLen) {
                    maxLen = j - i + 1;
                    sp = i;
                }
            }
        }
        return s.substr(sp, maxLen);
    }
};
