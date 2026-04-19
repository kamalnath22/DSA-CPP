class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        int n=nums.size();
        if(nums[0]!=0){
            nums[j]=nums[0];
            j++;
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
        }
        for(int i=j;i<n;i++){
            nums[i]=0;
        }
        
        
    }

};