#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfFirstAndLast(vector<int>& nums) {
        if(nums.size()!=0){
            int first=nums[0];
            int last=nums[nums.size()-1];
            return first+last;
        }
        return 0;
    }
};

int main() {
    vector<int> nums = {2, 3, 4, 5, 6};
    Solution sol;
    int ans = sol.sumOfFirstAndLast(nums);
    cout << "Sum of first and last element: " << ans;
    return 0;
}