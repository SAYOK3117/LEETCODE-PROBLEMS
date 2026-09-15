class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n = nums.size();
        // brute
        // for (int i = 0; i < n; i++) {
        //     int count = 0;
        //     for (int j = 0; j < n; j++) {
        //         if (nums[i] == nums[j]) {
        //             count++;
        //         }
        //     }
        //     // If the element appears only once, it's the target
        //     if (count == 1) {
        //         return nums[i];
        //     }
        // }

        // return -1;


        // better
        // unordered_map<int,int> hash;
        // int maxi = nums[0];
        // for(int i = 0;i<n;i++){
        //     maxi = max(maxi,nums[i]);
        //     hash[maxi]=0;
        // }
        // for(int i = 0;i<n;i++){
        //     hash[nums[i]]++;
        // }
        // for(int i = 0;i<n;i++){
        //     if(hash[nums[i]]==1) return nums[i];
        // }
        // return -1;

        //optimal
        int XOR = 0;
        for(int i =0;i<n;i++){
            XOR=XOR^nums[i];
        }
        return XOR;
    }
};