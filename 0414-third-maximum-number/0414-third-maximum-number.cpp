class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long largest = LLONG_MIN;
        long long sl = LLONG_MIN;
        long long thl = LLONG_MIN;

        for (int x : nums) {
            if (x == largest || x == sl || x == thl)
                continue;

            if (x > largest) {
                thl = sl;
                sl = largest;
                largest = x;
            }
            else if (x > sl) {
                thl = sl;
                sl = x;
            }
            else if (x > thl) {
                thl = x;
            }
        }

        return (thl == LLONG_MIN) ? largest : thl;
    }
};