class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=1;
        int r=numbers.size();
        while(l<r){
            int sum=numbers[l-1]+numbers[r-1];
            if(sum==target){
                return {l,r};
            }
            else if(sum>target)r--;
            else l++;
        }
        return {};
        
    }
};