#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int partition(vector<int>& nums, int low, int high) {

        int pivot = nums[low];

        int i = low;
        int j = high;

        while(i < j) {

            while(nums[i] <= pivot && i <= high - 1)
                i++;

            while(nums[j] > pivot && j >= low + 1)
                j--;

            if(i < j)
                swap(nums[i], nums[j]);
        }

        swap(nums[low], nums[j]);

        return j;
    }

    void qs(vector<int>& nums, int low, int high) {

        if(low < high) {

            int partIdx = partition(nums, low, high);

            qs(nums, low, partIdx - 1);

            qs(nums, partIdx + 1, high);
        }
    }

    vector<int> quickSort(vector<int>& nums) {

        qs(nums, 0, nums.size() - 1);

        return nums;
    }
};

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    Solution sol;

    arr = sol.quickSort(arr);

    for(int x : arr)
        cout << x << " ";

    return 0;
}

/* Choose a random pivot to reduce chances of worst-case O(n^2)
int randomIndex = low + rand() % (high - low + 1);
swap(arr[low], arr[randomIndex]);   move random pivot to first position

 Random pivot selection helps avoid worst-case O(n^2) when array is already sorted.
 It keeps expected time complexity close to O(n log n).
 Not mandatory, but improves Quick Sort reliability. */