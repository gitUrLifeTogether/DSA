#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {

        sort(nums.begin(), nums.end());

    }
};

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    Solution sol;

    sol.sortZeroOneTwo(nums);

    for(int x : nums)
        cout << x << " ";

    return 0;
}