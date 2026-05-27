#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   
    int findMedian(vector<vector<int>>& matrix) {
        
        vector<int> flattened;
        for (auto& row : matrix) {
            for (int val : row) {
                flattened.push_back(val);
            }
        }

        sort(flattened.begin(), flattened.end());

    
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
