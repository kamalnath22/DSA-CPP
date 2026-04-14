class Solution {
    public:
    void findsubset(int ind,vector<vector<int>>&ans,vector<int>&ds,vector<int>&nums,int n){
        if(ind==n){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[ind]);
        findsubset(ind+1,ans,ds,nums,n);
        ds.pop_back();
        findsubset(ind+1,ans,ds,nums,n);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        int n=nums.size();

        findsubset(0,ans,ds,nums,n);
        return ans;
    }
};