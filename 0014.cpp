// // Sort first, then we can do string matching(first one and the last) 
// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         string ans = "";
//         sort(strs.begin(), strs.end());
//         string a = strs[0], b = strs[strs.size()-1];
//         for(int i = 0; i<a.size(); i++){
//             if(a[i]==b[i]){
//                 ans += a[i];
//             }
//             else{
//                 return ans;
//             }
//         }
//         return ans;
//     }
// };