#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the median of a row-wise sorted matrix
    int findMedian(vector<vector<int>>& matrix) {
        // Step 1: Flatten the matrix into a single list
        vector<int> flattened;
        for (auto& row : matrix) {
            for (int val : row) {
                flattened.push_back(val);
            }
        }

        // Step 2: Sort the flattened list
        sort(flattened.begin(), flattened.end());

        // Step 3: Return the middle element
        int n = flattened.size();
        return flattened[n / 2];
    }
};

// Driver code
int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}
    };
    Solution sol;
    cout << sol.findMedian(matrix) << endl;  // Output: 5
    return 0;
}
