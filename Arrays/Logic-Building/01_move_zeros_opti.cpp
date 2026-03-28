#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

int main() {
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    Solution solution;
    solution.moveZeroes(arr);
    for (auto &it : arr) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}