// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         nums.push_back(-1);
//         int a = 0;
//         for(int i = 0; i<nums.size(); i++){
//             if(nums[i]!=i){
//                 a = i;
//                 break;
//             }
//         }
//         return a;
//     }
// };