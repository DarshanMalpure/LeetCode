class Solution {
public:
    int f(int i,int j,vector<vector<int>>&grid,int n,int m,vector<vector<int>>&dp){
        // int total=0;
        if(i>=n || j>=m) return dp[i][j]=INT_MAX;
        if(dp[i][j]!=-1) return dp[i][j];
        if(i==n-1 && j==m-1) return dp[i][j]=grid[i][j];
        int right=f(i,j+1,grid,n,m,dp);
        int down=f(i+1,j,grid,n,m,dp);
        return dp[i][j]=grid[i][j]+min(right,down);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        // int total=0;
        int i=0;
        int j=0;
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return f(i,j,grid,n,m,dp);
    }
};