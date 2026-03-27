#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int maxi = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            maxi = max(maxi, nums[i]);
        }
        return maxi;
    }
};

int main() {
    vector<int> nums = {3, 2, 1, 5, 2};
    Solution sol;
    int largest = sol.largestElement(nums);
    cout << largest << endl;
    return 0;
}