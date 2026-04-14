#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {

        int n = nums.size();

        for(int i = 0; i < n - 1; i++) {

            int mini = i;

            for(int j = i + 1; j < n; j++) {

                if(nums[j] < nums[mini])
                    mini = j;
            }

            swap(nums[mini], nums[i]);
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