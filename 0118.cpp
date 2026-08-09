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
//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int>> v(numRows,vector<int>(numRows,1));
//         for(int i = 1; i<numRows; i++){
//             for(int j = 1; j<numRows-i; j++){
//                 v[i][j] = v[i-1][j]+v[i][j-1];
//             }
//         }
//         vector<vector<int>> ans;
//         for(int i = 0; i<numRows; i++){
//             vector<int> tmp;
//             for(int r = 0; r<=i; r++){
//                 int c = i-r;
//                 tmp.push_back(v[r][c]);
//             }
//             ans.push_back(tmp);
//         }
//         return ans;
//     }
// };