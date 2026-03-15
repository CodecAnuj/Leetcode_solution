class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result(2 * n);
        int left = 0;
        int right = n;

        int i = 0;
        while (left < n && right < 2 * n) {
            result[i++] = nums[left++];
            result[i++] = nums[right++];
        }

        return result;
    }
};