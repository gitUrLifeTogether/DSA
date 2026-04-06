#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int temp=nums[0];
        for(int i=1;i<nums.size();i++){
            nums[i-1]=nums[i];
        }
        nums[nums.size()-1]=temp;

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