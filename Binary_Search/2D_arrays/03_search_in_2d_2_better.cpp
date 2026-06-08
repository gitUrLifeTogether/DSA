#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    //Helper function to perform binary search
    bool binarySearch(vector<int>& nums, int target) {
        int n = nums.size(); 
        int low = 0, high = n - 1;

        // Perform the steps:
        while (low <= high) {
            int mid = (low + high) / 2;
            
            //Return true if target is found
            if (nums[mid] == target) return true;
            else if (target > nums[mid]) low = mid + 1;
            else high = mid - 1;
        }
        //Return false if target not found
        return false;
}
public:
    //Function to search for a given target in matrix
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        //Traverse through each row
        for (int i = 0; i < n; i++) {
            
            /*Check if target is 
            present in the current row*/
            bool flag =  binarySearch(matrix[i], target);
            
            if (flag) return true;
        }
        // Return false if target is not found
        return false; 
    }
};

int main() {
    
    vector<vector<int>> matrix = {{1, 4, 7, 11, 15}, 
                                  {2, 5, 8, 12, 19},
                                  {3, 6, 9, 16, 22},
                                  {10, 13, 14, 17, 24},
                                  {18, 21, 23, 26, 30}};
    int target = 8;
    
  
    Solution sol;
    
    bool result = sol.searchMatrix(matrix, target);
    
    
    result ? cout << "true\n" : cout << "false\n";
    
    return 0;
}
