#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        vector<pair<int,int>> eleIndex;

        for(int i = 0; i < n; i++) {
            eleIndex.push_back({nums[i], i});
        }

        sort(eleIndex.begin(), eleIndex.end());

        int left = 0, right = n - 1;

        while(left < right) {

            int sum = eleIndex[left].first + eleIndex[right].first;

            if(sum == target) {
                return {eleIndex[left].second, eleIndex[right].second};
            }
            else if(sum < target) {
                left++;
            }
            else {
                right--;
            }
        }

        return {-1, -1};
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

    vector<int> ans = sol.twoSum(nums, target);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}