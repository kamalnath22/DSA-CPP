class Solution {
public:
     void findcombination(int ind,vector<int>&arr,int target,vector<vector<int>>&ans,vector<int>&ds,int n){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<n;i++){
            if(i>ind &&arr[i]==arr[i-1]) continue;
            if(arr[i]>target) break;
            ds.push_back(arr[i]);
            findcombination(i+1,arr,target-arr[i],ans,ds,n);
            ds.pop_back();
        }
     }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        int n=candidates.size();
        findcombination(0,candidates,target,ans,ds,n);
        return ans;

    }
};