class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();

        int count = 0;
        for (int i = 0; i < n; i++) {
            int n = nums[i];
            int digits = 0;
            while (n != 0) {
                n /= 10;
                digits++;
            }

            if (digits % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};