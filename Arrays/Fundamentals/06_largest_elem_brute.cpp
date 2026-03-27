#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static int largestElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int largest = nums[nums.size() - 1];
        return largest;
    }
};

int main() {
    vector<int> nums = {3, 2, 1, 5, 2};
    Solution sol;
    int largest = sol.largestElement(nums);
    cout << largest << endl;
    return 0;
}