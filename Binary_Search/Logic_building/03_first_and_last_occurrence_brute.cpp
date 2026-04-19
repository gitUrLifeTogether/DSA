#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<int> searchRange(vector<int>& nums,
                            int target) {

        int first = -1;

        int last = -1;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] == target) {

                if(first == -1)
                    first = i;

                last = i;
            }
        }

        return {first, last};
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

    vector<int> ans =
    sol.searchRange(nums, target);

    cout << ans[0] << " "
         << ans[1];

    return 0;
}