// // 1.Calculate the product of the three largest positive numbers
// // 2.Calculate the product of the two smallest negative numbers and the largest positive number
// // ans = max(1,2)
// class Solution {
// public:
//     int maximumProduct(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         int ans = max(nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3], 
//         nums[0]*nums[1]*nums[nums.size()-1]);
//         return ans;
//     }
// };