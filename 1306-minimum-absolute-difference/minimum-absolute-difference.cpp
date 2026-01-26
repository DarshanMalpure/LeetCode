class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int diff=INT_MAX;
        for(int i=1;i<n;i++){
            diff=min(diff,arr[i]-arr[i-1]);
        }
        cout<<diff<<endl;
        vector<vector<int>>ans;
        cout<<arr[1]<<" "<<arr[0]<<endl;
        cout<<arr[1]-arr[0]<<endl;
        for(int i=1;i<n;i++){
            vector<int>ad;
            if(arr[i]-arr[i-1]==diff){
                ad.push_back(arr[i-1]);
                ad.push_back(arr[i]);
                ans.push_back(ad);
            }
        }
        return ans;
    }
};