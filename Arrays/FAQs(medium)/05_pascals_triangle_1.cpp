#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pascalTriangleI(int r, int c) {
        return nCr(r-1, c-1);
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
    int c = 3;
    Solution sol;
    int ans = sol.pascalTriangleI(r, c);
    cout << "The element in the rth row and cth column in pascal's triangle is: " << ans;
    return 0;
}