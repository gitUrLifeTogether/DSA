#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for (int val : nums) {
            s.insert(val);
        }
        int k = s.size();
        int j = 0;
        for (int val : s) {
            nums[j++] = val;
        }
        return k;
    }
};

void printArray(vector<int> &nums, int n) {
    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 2, 3, 3};
    cout << "Original Array: ";
    printArray(nums, nums.size());
    Solution sol;
    int k = sol.removeDuplicates(nums);
    cout << "Array after removing the duplicates: ";
    printArray(nums, k);
    return 0;
}