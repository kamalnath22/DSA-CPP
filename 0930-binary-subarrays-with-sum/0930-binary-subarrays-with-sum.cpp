class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        int l = 0;
        int sum = 0;
        int count = 0;
        int zeroCount = 0;

        for(int r = 0; r < nums.size(); r++) {

            sum += nums[r];

            while(l < r && (sum > goal || nums[l] == 0)) {

                if(nums[l] == 0) {
                    zeroCount++;
                }
                else {
                    zeroCount = 0;
                }

                sum -= nums[l];
                l++;
            }

            if(sum == goal) {
                count += 1 + zeroCount;
            }
        }

        return count;
    }
};