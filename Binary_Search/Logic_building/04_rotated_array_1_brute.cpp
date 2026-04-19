#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to search for the target element in the array
    int search(vector<int>& nums, int target) {

        int n = nums.size();

        for (int i = 0; i < n; i++) {

            if (nums[i] == target)
                return i;
        }

        return -1;
    }
};

int main() {

    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    Solution sol;

    int result = sol.search(nums, target);

    if (result == -1)
        cout << "Target is not present.\n";
    else
        cout << "The index is: " << result << "\n";

    return 0;
}