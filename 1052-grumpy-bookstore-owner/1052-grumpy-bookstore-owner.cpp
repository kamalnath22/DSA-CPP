class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int alreadyHappy = 0;

        // Customers who are already happy
        for (int i = 0; i < customers.size(); i++) {
            if (grumpy[i] == 0) {
                alreadyHappy += customers[i];
            }
        }

        // First window: extra customers we can make happy
        int extra = 0;

        for (int i = 0; i < minutes; i++) {
            if (grumpy[i] == 1) {
                extra += customers[i];
            }
        }

        int maxExtra = extra;

        // Slide the window
        for (int i = minutes; i < customers.size(); i++) {

            // Add incoming unhappy customers
            if (grumpy[i] == 1) {
                extra += customers[i];
            }

            // Remove outgoing unhappy customers
            if (grumpy[i - minutes] == 1) {
                extra -= customers[i - minutes];
            }

            maxExtra = max(maxExtra, extra);
        }

        return alreadyHappy + maxExtra;
    }
};