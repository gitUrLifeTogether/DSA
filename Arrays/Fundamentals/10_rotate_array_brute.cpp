#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        vector<int> temp;
        for(int i = 0; i < k; i++) {
            temp.push_back(nums[i]);
        }
        for(int i = k; i < n; i++) {
            nums[i-k] = nums[i];
        }
        for(int i = 0; i < k; i++) {
            nums[n-k+i] = temp[i];
        }
    }
};

void printArray(vector<int> nums) {
    for(int val : nums) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int k = 2;
    cout << "Initial array: ";
    printArray(nums);
    Solution sol;
    sol.rotateArray(nums, k);
    cout << "Array after rotating elements by " << k << " places: ";
    printArray(nums);
    return 0;
}