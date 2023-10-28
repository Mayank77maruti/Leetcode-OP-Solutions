class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int counter = 0;
        
        for (int i = 0; i < n; i++) {
            unordered_map<int, int> count;
            
            for (int j = i; j < n; j++) {
                count[nums[j]]++;
                
                int distinctCount = count.size();
                counter += distinctCount * distinctCount;
            }
        }
        
        return counter;
    }
};