#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return -1;
        sort(nums.begin(), nums.end());
        int largest = nums.back();
        int secondLargest = -1;
        for (int i = n-2; i >= 0; i--) {
            if (nums[i] != largest) {
                secondLargest = nums[i];
                break;
            }
        }
        return secondLargest;
    }
};

int main() {
    vector<int> nums = {1, 2, 4, 6, 7, 5};
    Solution sol;
    int ans = sol.secondLargestElement(nums);
    cout << "The second largest element is: " << ans << endl;
    return 0;
}