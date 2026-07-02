#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {

        int n = nums.size();
        //outer loop for traversing the array
        for(int i = 0; i < n - 1; i++) {

            int mini = i;// assume the current index is the minimum
            //inner loop for finding minimum element in the remaining unsorted array
            for(int j = i + 1; j < n; j++) {

                if(nums[j] < nums[mini]) // if any element is smaller than minimum, update the minimum index
                    mini = j;
            }

            swap(nums[mini], nums[i]); // swap the found minimum element with the first element of the unsorted array
        }

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

    vector<int> sortedArr = sol.selectionSort(arr);

    for(int x : sortedArr)
        cout << x << " ";

    return 0;
}