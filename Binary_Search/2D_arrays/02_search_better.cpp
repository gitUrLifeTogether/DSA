#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    //Fuction to perform binary search 
    bool binarySearch(vector<int>& mat, int target) {
        int n = mat.size(); 
        int low = 0, high = n - 1;

        //Perform binary search
        while (low <= high) {
            int mid = (low + high) / 2;
            
            //Return true if target is found
            if (mat[mid] == target) return true;
            else if (target > mat[mid]) low = mid + 1;
            else high = mid - 1;
        }
        //Return false if target not found
        return false;
    }
public:
    //Function to search for a given target in matrix
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size();
        int m = mat[0].size();

        for (int i = 0; i < n; i++) {
            
            /*Check if there is a possibility that
            the target can be found in current row*/
            if (mat[i][0] <= target && target <= mat[i][m - 1]) {
                
                /*Return result fetched 
                from helper function*/
                return binarySearch(mat[i], target);
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
