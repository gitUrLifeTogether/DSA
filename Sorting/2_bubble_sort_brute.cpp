#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {

        int n = nums.size();
        // outer loop for number of passes
        for(int i = n - 1; i >= 1; i--) {

            // inner loop for comparing adjacent elements
            for(int j = 0; j <= i - 1; j++) {

                if(nums[j] > nums[j + 1]) {

                    swap(nums[j], nums[j + 1]);// swap adjacent elements if they are in the wrong order
                }
            }
        }

        return nums;
    }
};

// TC- O(n^2) - In the worst case, we have to make n passes through the array, and for each pass, we have to compare adjacent elements, which takes O(n) time. Therefore, the overall time complexity is O(n^2).
// SC- O(1) - The space complexity of the bubble sort algorithm is O(1) because it sorts the array in place.

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