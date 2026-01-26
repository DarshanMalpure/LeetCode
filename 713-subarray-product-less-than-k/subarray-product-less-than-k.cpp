class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        if(k<=1) return 0;
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]<k) count++;
            int mul=1;
            mul*=nums[i];
            for(int j=i+1;j<n;j++){
                mul*=nums[j];
                if(mul<k) count++;
                else break;
            }
        }
        return count;
    }
};