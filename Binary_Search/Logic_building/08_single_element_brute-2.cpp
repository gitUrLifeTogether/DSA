#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size();

        int ans = 0;

        for (int i = 0; i < n; i++) {

            ans = ans ^ nums[i];
        }

        return ans;
    }
};

int main() {

    vector<int> nums =
    {1, 1, 2, 2, 3, 3, 4};

    Solution sol;

    int ans =
    sol.singleNonDuplicate(nums);

    cout <<
    "The single element is: "
    << ans << "\n";

    return 0;
}