#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size() == 0)
            return 0;

        sort(nums.begin(), nums.end());

        int longest = 1;

        int cnt = 1;

        int lastSmaller = nums[0];

        for(int i = 1; i < nums.size(); i++) {

            if(nums[i] == lastSmaller)
                continue;

            if(nums[i] == lastSmaller + 1) {

                cnt++;
            }
            else {

                cnt = 1;
            }

            lastSmaller = nums[i];

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