#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int findKRotation(vector<int> &nums) {

        int n = nums.size();

        int low = 0, high = n - 1;

        int mini = INT_MAX;

        int idx = 0;

        while (low <= high) {

            int mid = (low + high) / 2;

            if (nums[low] <= nums[mid]) {

                if (nums[low] < mini) {

                    mini = nums[low];

                    idx = low;
                }

                low = mid + 1;
            }

            else {

                if (nums[mid] < mini) {

                    mini = nums[mid];

                    idx = mid;
                }

                high = mid - 1;
            }
        }

        return idx;
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