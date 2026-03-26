#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        char lastChar(string& s){
            char ch;
            int count = s.length();
            for(int i=0;i<count;i++){
                if(i==count-1){
                    ch=s[i];
                }
            }
            return ch;
        }
};

int main() {
    Solution sol;
    string s = "example";
    char ans = sol.lastChar(s);
    cout << "The last character is: " << ans;
    return 0;
}