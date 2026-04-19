class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxcount=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
               count++;
               maxcount=max(maxcount,count);
            }
            else if(nums[j]==0){
                count=0;
                continue;
                
            }

        }
        return maxcount;
        
    }
};