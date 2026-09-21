class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        vector<int> result;

        for (int x : nums2) {
            // If found in set1, add to result and remove to prevent duplicates
            if (set1.erase(x)) {
                result.push_back(x);
            }
        }

        return result;
        
    }
};