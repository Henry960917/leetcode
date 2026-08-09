// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.length()!=t.length()){
//             return false;
//         }
//         int a[26] = {0};
//         for(int i = 0; i<s.length(); i++){
//             a[s[i]-'a']++;
//             a[t[i]-'a']--;
//         }
//         for(int i = 0; i<26; i++){
//             if(a[i]!=0){
//                 return false;
//             }
//         }
//         return true;
//     }
// };
// /*
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());
//         if(s==t){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };
// */