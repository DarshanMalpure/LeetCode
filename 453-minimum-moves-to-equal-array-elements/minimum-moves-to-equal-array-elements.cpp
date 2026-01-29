class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count=0;
        // while(nums[0]!=nums[n-1]){
        //     for(int i=0;i<n-1;i++){
        //         nums[i]++;
        //     }
        //     count++;
        //     sort(nums.begin(),nums.end());
        // }
        int sum=0;
        int mini=INT_MAX;
        for(auto it:nums){
            mini=min(mini,it);
            sum+=it;
        }
        return sum-n*mini;
    }
};