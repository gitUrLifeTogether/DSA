#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int> &nums, int k) {

        int n = nums.size();

        int low = 0, high = n - 1;

        while (low <= high) {

            int mid = (low + high) / 2;

            if (nums[mid] == k)
                return mid;

            if (nums[low] <= nums[mid]) {

                if(nums[low] <= k && nums[mid] >= k)
                    high = mid - 1;

                else
                    low = mid + 1;
            }

            else {

                if(nums[mid] <= k && nums[high] >= k)
                    low = mid + 1;

                else
                    high = mid - 1;
            }
        }

        return -1;
    }
};

int main() {

    vector<int> nums = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int target = 1;

    Solution sol;

    int result = sol.search(nums, target);

    if (result == -1)
        cout << "Target is not present.\n";
    else
        cout << "The index is: " << result << "\n";

    return 0;
}