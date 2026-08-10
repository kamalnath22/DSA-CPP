class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxavg=INT_MIN;
        double avg=0;
        double avgsum=0;
        int count=0;
        for(int i=0;i<k;i++){
            avg+=nums[i];
            
        }
        avgsum=avg/k;
        maxavg=max(maxavg,avgsum);
        for(int i=k;i<nums.size();i++){
            avg+=nums[i];
            avg-=nums[i-k];
            avgsum=avg/k;
            maxavg=max(maxavg,avgsum);
        }
        return maxavg;
        
    }
};