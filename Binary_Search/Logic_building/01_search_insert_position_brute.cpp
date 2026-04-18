#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int searchInsert(vector<int>& nums, int target) {

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] >= target)
                return i;
        }

        return nums.size();
    }
};

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    int target;
    cin >> target;

    Solution sol;

    cout << sol.searchInsert(nums, target);

    return 0;
}