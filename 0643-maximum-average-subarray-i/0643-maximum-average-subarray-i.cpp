class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double windowsum=0;
        double maxavg=INT_MIN;
        for(int i=0;i<k;i++){
            windowsum+=nums[i];
        }
        double avg;
        maxavg = windowsum / k;
        for(int i=k;i<n;i++){
            windowsum+=nums[i];
            windowsum-=nums[i-k];
            avg=windowsum/k;
            maxavg=max(maxavg,avg);
        }
        return maxavg;
    }
};