#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {

        int n = nums.size();

        for(int i = n - 1; i >= 1; i--) {

            for(int j = 0; j <= i - 1; j++) {

                if(nums[j] > nums[j + 1]) {

                    swap(nums[j], nums[j + 1]);
                }
            }
        }

        return nums;
    }
};

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    Solution sol;

    nums = sol.bubbleSort(nums);

    for(int x : nums)
        cout << x << " ";

    return 0;
}