// class Solution {
// public:
//     bool isHappy(int n) {
//        unordered_set<int> s;
//        int sum = 0; 
//        while(n!=1 && !s.count(n)){
//         s.insert(n);
//         while(n>0){
//             int tmp = n%10;
//             sum+=tmp*tmp;
//             n/=10;
//         }
//         n = sum;
//         sum = 0;
//        }
//        return n==1; 
//     }
// };