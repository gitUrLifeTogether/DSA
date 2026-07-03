
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {

        int n = nums.size();
        // outer loop for traversing the array
        for(int i = 1; i < n; i++) {

            int key = nums[i]; // store the current element to be inserted in the sorted portion of the array

            int j = i - 1; 
            // initialize j to the index of the last element in the sorted portion of the array

            // inner loop for finding the correct position to insert the current element
            while(j >= 0 && nums[j] > key) {

                nums[j + 1] = nums[j]; // shift the element to the right to make space for the current element

                j--;
            }

            nums[j + 1] = key; // insert the current element in its correct position in the sorted portion of the array
        }

        return nums;
    }
};
// TC- O(n^2) -for worst case.
// TC- O(n) - for best case, when the array is already sorted, we only need to make one pass through the array. it will never enter while loop.
// SC- O(1) - The space complexity is O(1) because it sorts the array in place.
int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    Solution sol;

    nums = sol.insertionSort(nums);

    for(int x : nums)
        cout << x << " ";

    return 0;
}
/* 
this is the swapping version of insertion sort, but since it does swaps it takes slightly extra cost
class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {

        int n = nums.size();

        for(int i = 0; i < n; i++) {

            int j = i;

            while(j > 0 && nums[j - 1] > nums[j]) {

                swap(nums[j - 1], nums[j]);

                j--;
            }
        }

        return nums;
    }
};  */