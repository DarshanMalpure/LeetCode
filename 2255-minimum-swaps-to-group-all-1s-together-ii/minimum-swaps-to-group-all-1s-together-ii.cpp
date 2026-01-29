class Solution {
public:
    int minSwaps(vector<int>& nums) {
        vector<int>arr;
        int totalOnes=0;
        for(int it:nums){
            if(it==1) totalOnes++;
            arr.push_back(it);
        }
        for(int it:nums){
            arr.push_back(it);
        }
        int n=nums.size();
        int currOnes=0;
        int maxCount=0;
        int i=0;
        int j=0;
        while(j<2*n){
            if(arr[j]==1) currOnes++;
            if(j-i+1>totalOnes){
                currOnes-=arr[i];
                i++;
            }
            maxCount=max(maxCount,currOnes);
            j++;
        }
        return totalOnes-maxCount;
    }
};