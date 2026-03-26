#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        char lastChar(string& s){
            return s[s.length()-1];
        }
};

int main() {
    Solution sol;
    string s = "example";
    char ans = sol.lastChar(s);
    cout << "The last character is: " << ans;
    return 0;
}