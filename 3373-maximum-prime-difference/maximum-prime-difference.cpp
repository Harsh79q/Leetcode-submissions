class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
         int first = -1, last = -1;

        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i];
            bool prime = n >= 2;

            for (int j = 2; j * j <= n; j++) {
                if (n % j == 0) {
                    prime = false;
                    break;
                }
            }

            if (prime) {
                if (first == -1)
                    first = i;
                last = i;
            }
        }

        return last - first;
    }
};