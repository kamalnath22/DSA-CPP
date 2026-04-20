class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>result(nums.size());
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
             result[j]=nums[i];
             j+=2;
            }
        }
        int k=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
             result[k]=nums[i];
             k+=2;
            }
        }
        return result;
    }
};