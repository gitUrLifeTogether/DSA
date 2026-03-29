#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N = nums.size();
        int sum1 = (N * (N + 1)) / 2;
        int sum2 = 0;
        for (int num : nums) {
            sum2 += num;
        }
        return sum1 - sum2;
    }
};

int main() {
    vector<int> nums = {0, 1, 2, 4};
    Solution solution;
    int ans = solution.missingNumber(nums);
    cout << "The missing number is: " << ans << endl;
    return 0;
}