class Solution {
public:
void findsubset(int index,vector<int>&nums,vector<vector<int>>&ans,vector<int>&ds,int n){
    if(index==n){
        ans.push_back(ds);
        return;
    }
    ds.push_back(nums[index]);
    findsubset(index+1,nums,ans,ds,n);
    ds.pop_back();
    while(index+1<nums.size()&&nums[index]==nums[index+1]) index++;
    findsubset(index+1,nums,ans,ds,n);


}
public:

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>ds;
        int n=nums.size();
        findsubset(0,nums,ans,ds,n);
        return ans;
        
    }
};