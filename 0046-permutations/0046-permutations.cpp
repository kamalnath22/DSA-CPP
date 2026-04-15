class Solution {
public:
void findperm(int ind,vector<vector<int>>&ans,vector<int>&nums,int n){
    if(ind==n){
        ans.push_back(nums);
        return;
    }
    for(int i=ind;i<n;i++){
        swap(nums[ind],nums[i]);
        findperm(ind+1,ans,nums,n);
        swap(nums[ind],nums[i]);
    }
}
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        findperm(0,ans,nums,n);
        return ans;

    }
};