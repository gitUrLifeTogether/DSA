#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {

        int cnt0 = 0, cnt1 = 0, cnt2 = 0;

        for(int x : nums) {

            if(x == 0)
                cnt0++;

            else if(x == 1)
                cnt1++;

            else
                cnt2++;
        }

        int index = 0;

        for(int i = 0; i < cnt0; i++)
            nums[index++] = 0;

        for(int i = 0; i < cnt1; i++)
            nums[index++] = 1;

        for(int i = 0; i < cnt2; i++)
            nums[index++] = 2;
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