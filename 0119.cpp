// /*
// 1 1 1 1 1 1...
// 1 2 3 4 5 6...
// 1 3 6 10 15 21...
// .
// .
// .
// */
// class Solution {
// public:
//     vector<int> getRow(int rowIndex) {
//         vector<int> v;
//         for(int i = 0; i<=rowIndex; i++){
//             v.push_back(1);
//             for(int j = i-1; j>0; j--){
//                 v[j] = v[j]+v[j-1];
//             }
//         }
//         return v;
//     }
// };