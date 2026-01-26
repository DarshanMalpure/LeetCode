class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        map<int,int>mpp;
        int maxi=0;
        int count=0;
        mpp[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            // if(sum==k){
            //     count++;
            //     maxi=max(maxi,i+1);
            // }
            int rem=sum-k;
            if(mpp.find(rem)!=mpp.end()){
                // maxi=max(maxi,i-mpp[rem]);
                count+=mpp[rem];
            }
            mpp[sum]++;
            

        }
        return count;
    }
};