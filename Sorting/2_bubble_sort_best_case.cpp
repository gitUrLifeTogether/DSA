#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {

        int n = nums.size();

        for(int i = n - 1; i >= 0; i--) {

            bool didSwap = false; // variable to track if any swaps were made in the current pass

            for(int j = 0; j <= i - 1; j++) {

                if(nums[j] > nums[j + 1]) {

                    swap(nums[j], nums[j + 1]);

                    didSwap = true; // update variable if any swaps were done.
                }
            }

            if(!didSwap)
                break; // break out of the loop if no swaps were made, indicating that the array is already sorted.
        }

        return nums;
    }
        // TC- O(n) - In the best case, when the array is already sorted, we only need to make one pass through the array, which takes O(n) time. 
        // SC- O(1) - The space complexity of the bubble sort algorithm is O(1) because it sorts the array in place.
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