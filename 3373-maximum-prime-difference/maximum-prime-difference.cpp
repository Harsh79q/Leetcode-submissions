class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
         int n = nums.size();
        int left = 0, right = n - 1;

        while (left < n) {
            int x = nums[left];
            bool prime = x >= 2;

            for (int j = 2; j * j <= x; j++) {
                if (x % j == 0) {
                    prime = false;
                    break;
                }
            }

            if (prime) break;
            left++;
        }

        while (right >= 0) {
            int x = nums[right];
            bool prime = x >= 2;

            for (int j = 2; j * j <= x; j++) {
                if (x % j == 0) {
                    prime = false;
                    break;
                }
            }

            if (prime) break;
            right--;
        }

        return right - left;
    }
};