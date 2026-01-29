class Solution {
public:
    int minSwaps(vector<int>& nums) {
        vector<int>arr;
        for(int it:nums){
            arr.push_back(it);
        }
        for(int it:nums){
            arr.push_back(it);
        }
        int countOnes=0;
        for(int it:nums){
            if(it==1) countOnes++;
        }
        int n=arr.size();
        int maxOnes=0;
        for(int i=0;i<countOnes;i++){
            if(arr[i]==1) maxOnes++;
        }
        int minSwaps=INT_MAX;
        int x=maxOnes;
        for(int i=1;i<=n-countOnes;i++){
            if(arr[i-1]==1) maxOnes--;
            if(arr[i+countOnes-1]==1) maxOnes++;
            if(x<maxOnes) x=maxOnes;
        }
        int numZeroes=countOnes-x;
        return numZeroes;
    }
};