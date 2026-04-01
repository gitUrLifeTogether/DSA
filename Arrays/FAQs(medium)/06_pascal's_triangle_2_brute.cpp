#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> pascalTriangleII(int r) {
        vector<int> ans;
        for(int i = 1; i <= r; i++){
            ans.push_back(nCr(r-1, i-1));
        }
        return ans;
    }
    int nCr(int n, int r){
        int res = 1;
        for(int i = 0; i < r; i++){
            res = res * (n-i);
            res = res / (i+1);
        }
        return res;
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