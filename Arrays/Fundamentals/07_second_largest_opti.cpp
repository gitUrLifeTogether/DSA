#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int maxi = INT_MIN;
        int secondlargest = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxi) {
                secondlargest = maxi;
                maxi = nums[i];
            } else if (nums[i] != maxi && nums[i] > secondlargest) {
                secondlargest = nums[i];
            }
        }
        return (secondlargest == INT_MIN) ? -1 : secondlargest;
    }
};

int main() {
    vector<int> nums = {1, 2, 4, 7, 7, 5};
    Solution sol;
    int sL = sol.secondLargestElement(nums);
    cout << "Second largest is " << sL << endl;
    return 0;
}