#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int upperBound(vector<int>& nums,int x) {

        int n = nums.size();

        for(int i = 0; i < n; i++) {

            if(nums[i] > x)
                return i;
        }

        return n;
    }
};

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    int x;
    cin >> x;

    Solution sol;

    cout << sol.upperBound(nums, x);

    return 0;
}