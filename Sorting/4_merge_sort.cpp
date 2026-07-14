#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void merge(vector<int>& nums, int low, int mid, int high) {

        vector<int> temp; // temp vector to store the merged elements.

        // two pointers to traverse the two subarrays, left and right.
        int left = low;
        int right = mid + 1;

        //compare the elements of the two subarrays and merge them in sorted order.
        while(left <= mid && right <= high) {

            if(nums[left] <= nums[right]) {

                temp.push_back(nums[left]);
                left++;
            }

            else {

                temp.push_back(nums[right]);
                right++;
            }
        }
        // if elem left int the left subarray.
        while(left <= mid) {

            temp.push_back(nums[left]);
            left++;
        }
        // if elem left int the right subarray.
        while(right <= high) {

            temp.push_back(nums[right]);
            right++;
        }
        // put them back in original array, since the sorting should be done in place.
        for(int i = low; i <= high; i++) {

            nums[i] = temp[i - low];
        }
    }

    void mS(vector<int>& nums, int low, int high) {
        // very important to write bas case.
        if(low >= high)
            return;

        int mid = (low + high) / 2;
        // recursive calls to sort the left and right subarrays.
        mS(nums, low, mid);

        mS(nums, mid + 1, high);

        merge(nums, low, mid, high); // call merge function to merge the two sorted subarrays.
    }

    vector<int> mergeSort(vector<int>& nums) {

        int n = nums.size();

        mS(nums, 0, n - 1);

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

    nums = sol.mergeSort(nums);

    for(int x : nums)
        cout << x << " ";

    return 0;
}


// TC- O(nlogn) - for all cases, since we are dividing the array into two halves and merging them back together.
// SC- O(n) - The space complexity is O(n) because we are using a temporary vector to store the merged elements.