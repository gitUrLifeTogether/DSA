#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int xor1 = 0, xor2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            xor1 = xor1 ^ (i + 1);
            xor2 = xor2 ^ nums[i];
        }
        return (xor1 ^ xor2);
    }
};

int main() {
    vector<int> nums = {1, 2, 4, 0};
    Solution solution;
    int ans = solution.missingNumber(nums);
    cout << "The missing number is: " << ans << endl;
    return 0;
}





