#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int max = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > max) {
                max = nums[i];
            }
        }
        return max;
    }
};

int main() {
    vector<int> nums = {3, 2, 1, 5, 2};
    Solution sol;
    int largest = sol.largestElement(nums);
    cout << largest << endl;
    return 0;
}