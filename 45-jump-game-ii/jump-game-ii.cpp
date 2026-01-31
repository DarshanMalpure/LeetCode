class Solution {
public:
    int f(int ind,vector<int>&nums,int n,vector<int>&dp){
        if(ind>=n-1) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int ans=INT_MAX;
        for(int j=1;ind+j<n && j<=nums[ind];j++){
            int jump=f(ind+j,nums,n,dp);
            if(jump!=INT_MAX) ans=min(ans,1+jump);
        }
        return dp[ind]=ans;
    }
    int jump(vector<int>& nums) {
        int n=nums.size();
        int ind=0;
        vector<int>dp(n+1,-1);
        return f(ind,nums,n,dp);
    }
};