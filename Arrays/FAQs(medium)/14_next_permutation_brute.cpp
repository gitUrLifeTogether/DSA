#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void helper(int ind,
                vector<int>& nums,
                vector<vector<int>>& ans) {

        if(ind == nums.size()) {

            ans.push_back(nums);

            return;
        }

        for(int i = ind; i < nums.size(); i++) {

            swap(nums[ind], nums[i]);

            helper(ind + 1, nums, ans);

            swap(nums[ind], nums[i]);
        }
    }

    void nextPermutation(vector<int>& nums) {

        vector<vector<int>> ans;

        helper(0, nums, ans);

        sort(ans.begin(), ans.end());

        int index = -1;

        for(int i = 0; i < ans.size(); i++) {

            if(ans[i] == nums) {

                index = i;

                break;
            }
        }

        if(index == ans.size() - 1)

            nums = ans[0];

        else

            nums = ans[index + 1];
    }
};

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    Solution sol;

    sol.nextPermutation(nums);

    for(int x : nums)
        cout << x << " ";

    return 0;
}