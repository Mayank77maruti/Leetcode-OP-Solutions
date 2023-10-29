class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int n = nums.size();
    int result = 0;

    for (int i = 31; i >= 0; i--) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if ((nums[j] & (1 << i)) != 0) {
                count++;
            }
        }
        if (count >= k) {
            result |= (1 << i);
        }
    }

    return result;
    }
};