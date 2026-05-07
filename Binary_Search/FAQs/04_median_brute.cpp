#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //Function to find the median of two sorted arrays.
    double median(vector<int>& arr1, vector<int>& arr2) {
        // Size of two given arrays
        int n1 = arr1.size(), n2 = arr2.size();

        vector<int> merged;
        // Apply the merge step
        int i = 0, j = 0;
        while (i < n1 && j < n2) {
            if (arr1[i] < arr2[j]) merged.push_back(arr1[i++]);
            else merged.push_back(arr2[j++]);
        }

        // Copy the remaining elements
        while (i < n1) merged.push_back(arr1[i++]);
        while (j < n2) merged.push_back(arr2[j++]);

        // Find the median
        int n = n1 + n2;
        if (n % 2 == 1) {
            return (double)merged[n / 2];
        }

        double median = ((double)merged[n / 2] + (double)merged[(n / 2) - 1]) / 2.0;
        return median;
    }
};

int main() {
    vector<int> a = {1, 4, 7, 10, 12};
    vector<int> b = {2, 3, 6, 15};

    // Create an instance of the Solution class
    Solution sol;

    // Print the median of the two sorted arrays
    cout << "The median of two sorted arrays is " << fixed << setprecision(1)
         << sol.median(a, b) << '\n';

    return 0;
}
