#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int search(vector<int>& nums,
               int target) {

        int low = 0;

        int high = nums.size() - 1;

        while(low <= high) {

            int mid =
            low + (high - low) / 2;

            if(nums[mid] == target)
                return mid;

            else if(nums[mid] < target)
                low = mid + 1;

            else
                high = mid - 1;
        }

        return -1;
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

    cout << sol.search(nums,
                       target);

    return 0;
}