#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int temp = nums[0];
        for(int i = 0; i < nums.size()-1; i++){
            nums[i] = nums[i+1];
        }
        nums[nums.size()-1] = temp;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5};
    solution.rotateArrayByOne(nums);
    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}