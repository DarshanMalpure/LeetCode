class Solution {
public:
    int f(int i,int j,string &s,string &rev,vector<vector<int>>&dp){
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==rev[j]) return dp[i][j]=1+f(i-1,j-1,s,rev,dp);
        else return dp[i][j]=max(f(i-1,j,s,rev,dp),f(i,j-1,s,rev,dp));
    }
    int longestPalindromeSubseq(string s) {
        string rev=s;
        reverse(s.begin(),s.end());
        int n=s.size();
        int i=n-1;
        int j=n-1;
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return f(i,j,s,rev,dp);
    }
};