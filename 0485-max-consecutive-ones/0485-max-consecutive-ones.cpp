class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();

        int max = 0;
        int current = 0;
        int i = 0;
        while (i < n) {
            if (nums[i] == 1) {
                current++;
                if (max < current) {
                    max = current;
                }
            } else {
                current = 0;
            }
            i++;
        }

        return max;
    }
};