#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N = nums.size();
        int freq[N+1] = {0};
        for (int num : nums) {
            freq[num]++;
        }
        for (int i = 0; i <= N; i++) {
            if (freq[i] == 0) return i;
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {0, 1, 2, 4};
    Solution solution;
    int ans = solution.missingNumber(nums);
    cout << "The missing number is: " << ans << endl;
    return 0;
}