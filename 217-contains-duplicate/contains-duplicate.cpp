class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // unordered_set<int> seen;
        // for (int num : nums) {
        //     if (seen.count(num)) {
        //         return true;
        //     }
        //     seen.insert(num);
        // }
        // return false;
        unordered_map<int,int>mp;
        for(int i =0; i<nums.size(); i++){
            if(mp.find(nums[i])!=mp.end()) return true;
             mp[nums[i]]=i;
        }
        return false;
       
    }
};
