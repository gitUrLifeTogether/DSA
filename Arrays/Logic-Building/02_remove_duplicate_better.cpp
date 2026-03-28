#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};

int main() {
    vector<int> nums = {1, 1, 2, 2, 2, 3, 3};
    Solution solution;
    int k = solution.removeDuplicates(nums);
    cout << "The vector after removing duplicate elements is " << endl;
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}