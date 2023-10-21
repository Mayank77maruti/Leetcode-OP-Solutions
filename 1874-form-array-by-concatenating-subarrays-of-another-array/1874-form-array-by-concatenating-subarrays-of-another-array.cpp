class Solution {
public:
    bool canChoose(vector<vector<int>>& groups, vector<int>& nums) {
        int startIndex = 0;
        for (int i = 0; i < groups.size(); i++) {
            int groupSize = groups[i].size();
            auto it = search(nums.begin() + startIndex, nums.end(), groups[i].begin(), groups[i].end());
            if (it == nums.end()) {
                return false; // If the group is not found, return false
            }
            int foundIndex = it - nums.begin();// it would store the index of the first element
            if (foundIndex < startIndex) {
                return false; // If the found index is not strictly increasing, return false
            }           
            startIndex = foundIndex + groupSize; // Update the startIndex for the next search
        }
        return true;
    }
};
