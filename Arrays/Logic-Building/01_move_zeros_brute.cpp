#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                temp.push_back(nums[i]);
            }
        }
        int nz = temp.size();
        for (int i = 0; i < nz; i++) {
            nums[i] = temp[i];
        }
        for (int i = nz; i < n; i++) {
            nums[i] = 0;
        }
    }
};

int main() {
    vector<int> nums = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    Solution sol;
    sol.moveZeroes(nums);
    cout << "Array after moving zeroes: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    return 0;
}