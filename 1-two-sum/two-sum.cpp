
// class Solution {
// public:
// // using hashmap
// vector<int> twoSum(vector<int>& nums, int target)
// {
//     unordered_map <int,int> num_map;
//     for(int i=0;i<nums.size();i++){
//         int remaining= target-nums[i];
//         if(num_map.find(remaining)!=num_map.end()){
//             return{num_map[remaining],i};
//         }
//         num_map[nums[i]]=i;
//     }
//     return{-1,-1};
// }
// };

// brute force
// vector<int> twoSum(vector<int>& nums, int target) {
//     for (int i = 0; i < nums.size(); i++) {
//         for (int j = i + 1; j < nums.size(); j++) {
//             if (nums[i] + nums[j] == target) {
//                 return {i, j};
//             }
//         }
//     }
//     return {-1,-1};
// }



// two pointer method
class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
    int n=nums.size();
    vector<pair<int, int>> indexed_nums;
        for (int i = 0; i < nums.size(); ++i) {
            indexed_nums.push_back({nums[i], i});
        }
    sort(indexed_nums.begin(),indexed_nums.end());
    int i=0,j=n-1;
    while(i<j){
        if(indexed_nums[i].first+indexed_nums[j].first==target) {
            return {indexed_nums[i].second,indexed_nums[j].second};
        }
        else if(indexed_nums[i].first+indexed_nums[j].first>target){
            j--;
            }
        else{
            i++;
        }
    }
    return {-1,-1};
}
};
        

// int main() {
//     vector<int> nums = {2, 7, 11, 15};
//     int target = 9;

//     vector<int> ans = twoSum(nums, target);

//     cout << ans[0] << " " << ans[1] << endl;

//     return 0;
// }
