#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<int> getFloorAndCeil(vector<int>& nums, int x) {

        int n = nums.size();

        int floorVal = -1;

        int ceilVal = -1;

        int low = 0;

        int high = n - 1;

        // Find floor
        while(low <= high) {

            int mid =
            (low + high) / 2;

            if(nums[mid] <= x) {

                floorVal = nums[mid];

                low = mid + 1;
            }

            else {

                high = mid - 1;
            }
        }

        low = 0;

        high = n - 1;

        // Find ceil
        while(low <= high) {

            int mid =(low + high )/ 2;

            if(nums[mid] >= x) {

                ceilVal = nums[mid];

                high = mid - 1;
            }

            else {

                low = mid + 1;
            }
        }

        return {floorVal, ceilVal};
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

    vector<int> ans =
    sol.getFloorAndCeil(nums, x);

    cout << ans[0] << " "<< ans[1];

    return 0;
}