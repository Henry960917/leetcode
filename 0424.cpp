// // mxCnt:出現最多次字元頻率, mx:最大長度
// class Solution {
// public:
//     int characterReplacement(string s, int k) {
//         vector<int> v(26,0);
//         int l = 0, mxCnt = 0, mx = 0;
//         for(int r = 0; r<s.size(); r++){
//             v[s[r]-'A']++;
//             mxCnt = max(mxCnt, v[s[r]-'A']);
//             while((r-l+1)-mxCnt>k){  // not ok
//                 v[s[l]-'A']--;
//                 l++;
//             }
//             mx = max(mx, r-l+1);
//         }
//         return mx;
//     }
// };