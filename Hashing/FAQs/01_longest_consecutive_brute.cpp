#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool linearSearch(vector<int>& nums, int target) {

        for(int x : nums)
            if(x == target)
                return true;

        return false;
    }

public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size() == 0)
            return 0;

        int longest = 1;

        for(int i = 0; i < nums.size(); i++) {

            int x = nums[i];

            int cnt = 1;

            while(linearSearch(nums, x + 1)) {

                x++;

                cnt++;
            }

            longest = max(longest, cnt);
        }

        return longest;
    }
};

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    Solution sol;

    cout << sol.longestConsecutive(nums);

    return 0;
}