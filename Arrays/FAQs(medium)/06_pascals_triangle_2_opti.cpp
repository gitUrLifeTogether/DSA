#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> pascalTriangleII(int r) {
        vector<int> Ans;
        int ans = 1;
        Ans.push_back(ans);
        for(int i = 1; i < r; i++){
            ans = ans * (r-i);
            ans = ans / i;
            Ans.push_back(ans);
        }
        return Ans;
    }
};

int main() {
    int r = 5;
    Solution sol;
    vector<int> ans = sol.pascalTriangleII(r);
    cout << "Row " << r << ": ";
    for(int x : ans) cout << x << " ";
    return 0;
}