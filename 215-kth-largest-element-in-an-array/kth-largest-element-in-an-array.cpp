class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int m=nums.size();
        priority_queue<int> pq;
        for(int i=0;i<m;i++){
            pq.push(nums[i]);

        }
        while(k>1){
            pq.pop();
            k--;
        
        }
        return pq.top();


        
    }
};