#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void merge(vector<int>& nums, int low, int mid, int high) {

        vector<int> temp;

        int left = low;
        int right = mid + 1;

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

        while(left <= mid) {

            temp.push_back(nums[left]);
            left++;
        }

        while(right <= high) {

            temp.push_back(nums[right]);
            right++;
        }

        for(int i = low; i <= high; i++) {

            nums[i] = temp[i - low];
        }
    }

    void mS(vector<int>& nums, int low, int high) {

        if(low >= high)
            return;

        int mid = (low + high) / 2;

        mS(nums, low, mid);

        mS(nums, mid + 1, high);

        merge(nums, low, mid, high);
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