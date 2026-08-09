// class Solution {
// public:
//     int lengthOfLastWord(string s) {
//         reverse(s.begin(), s.end());
//         int cnt = 0;
//         bool firstSpace = true;
//         for(int i = 0; i<s.size(); i++){
//             if(s[i]==' '){
//                 if(firstSpace==true){
//                     continue;
//                 }
//                 else{
//                     return cnt;
//                 }
//             }
//             else if(isalpha(s[i])){
//                 firstSpace = false;
//                 cnt++;
//             }
//         }
//         return cnt;
//     }
// };