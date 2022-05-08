#include <iostream>
using namespace std;
class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int arr[n][m];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                arr[i][j] = matrix[i][j];
            }
        }
        for (int i = 1; i < n; i++){
            for (int j = 1; j < m; j++){
                if (arr[i][j]!=0)
                    arr[i][j] = min({arr[i-1][j], arr[i-1][j-1], arr[i][j-1]}) + 1;
            }
        }
        int sum1 = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                sum1 += arr[i][j];
            }
        }
        return sum1;
    }
};
