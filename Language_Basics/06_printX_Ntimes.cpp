#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void printX(int X, int N) {
        for (int i = 0; i < N; i++) {
            cout << X;

            if (i < N - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    Solution sol;
    int X = 7, N = 5;
    sol.printX(X, N);
    return 0;
}