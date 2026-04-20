#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int findKRotation(vector<int>& nums) {

        int n = nums.size();

        int ans = INT_MAX;

        int index = -1;

        for (int i = 0; i < n; i++) {

            if (nums[i] < ans) {

                ans = nums[i];

                index = i;
            }
        }

        return index;
    }
};

int main() {

    vector<int> nums = {4, 5, 6, 7, 0, 1, 2, 3};

    Solution sol;

    int ans = sol.findKRotation(nums);

    cout << "The array is rotated "
         << ans << " times.\n";

    return 0;
}