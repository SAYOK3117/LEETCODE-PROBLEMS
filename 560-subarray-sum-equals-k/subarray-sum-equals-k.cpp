class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            int sum =0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                if(sum==k) cnt++;
            }
       
         } 
        // int cnt=0;
        // unordered_map<int,int> mp;
        // mp[0]=1;
        // int sum=0;
        // for(int i=0;i<n;i++){
        //     sum+=nums[i];
        //     cnt+=mp[sum-k];
        //     mp[sum]++;
        // }
        //     return cnt;

        // int cnt =0;
        // for(int i =0;i<n;i++){
        //     for(int j = i;j<n;j++){
        //         int sum = 0;
        //         for(int k = i; k<=j; k++){
        //             sum+=nums[k];
        //         }
        //         if(sum==k) cnt++;
        //     }
        // }
        return cnt;
        }
    
};












// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
        
//         unordered_map<int,int>mp;
//         mp[0]=1;
//         int cnt=0;
//         int sum=0;
//         int n=nums.size();
//         for(int i=0;i<n;i++)
//         {    sum+=nums[i];
//             int reqd=sum-k;
//             if(mp.find(reqd)!=mp.end())
//             {
//                 cnt+=mp[reqd];
//             }
            
//             mp[sum]++;
//         }
//         return cnt;
//     }   
// };













