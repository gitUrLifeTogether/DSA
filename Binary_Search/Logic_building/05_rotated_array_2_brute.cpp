#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchInARotatedSortedArrayII(vector<int>& arr, int target) {

        int n = arr.size();

        for (int i = 0; i < n; i++) {

            if (arr[i] == target)
                return true;
        }

        return false;
    }
};

int main() {

    vector<int> arr = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    int target = 3;

    Solution sol;

    bool result =
    sol.searchInARotatedSortedArrayII(arr, target);

    if (!result)
        cout << "Target is not present.\n";
    else
        cout << "Target is present in the array.\n";

    return 0;
}