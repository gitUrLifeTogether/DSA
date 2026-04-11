#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> generateRow(int row) {
        long long ans = 1;
        vector<int> ansRow;

        ansRow.push_back(1);

        for (int col = 1; col < row; col++) {
            ans = ans * (row - col);
            ans = ans / col;
            ansRow.push_back(ans);
        }

        return ansRow;
    }

    vector<vector<int>> pascalTriangleIII(int n) {
        vector<vector<int>> finalAns;

        for(int row = 1; row <= n; row++) {
            finalAns.push_back(generateRow(row));
        }

        return finalAns;
    }
};

int main() {
    int n;
    cin >> n;   // user input instead of hardcoded value

    Solution sol;

    vector<vector<int>> pascalTriangle = sol.pascalTriangleIII(n);

    for(auto &row : pascalTriangle) {
        for(auto &element : row) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}