class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i:nums){
            mp[i]++;
        }
        vector<int>result;
        for(auto it:mp){
            if(mp[it.first]>n/3){
                result.push_back(it.first);
            }
        }
        
        return result;

        
    }
};