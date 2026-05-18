#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //Function to search for a given target in matrix
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        // Check if the matrix is empty
        if (mat.empty() || mat[0].empty()) {
            return false;
        }
        
        int n = mat.size();    
        int m = mat[0].size(); 
        
        // Traverse the matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == target) {
                    // Return true if target is found
                    return true; 
                }
            }
        }
        
        // Return false if target is not found
        return false; 
    }
};

int main() {
    
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int target = 8;
    
    //Create an instace of Solution class
    Solution sol;
    
    bool result = sol.searchMatrix(matrix, target);
    
    // Output the result
    result ? cout << "true\n" : cout << "false\n";
    
    return 0;
}
