
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {

        int n = nums.size();

        for(int i = 1; i < n; i++) {

            int key = nums[i];

            int j = i - 1;

            while(j >= 0 && nums[j] > key) {

                nums[j + 1] = nums[j];

                j--;
            }

            nums[j + 1] = key;
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