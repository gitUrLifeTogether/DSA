#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //Function to find the median of two sorted arrays.
    double median(vector<int>& arr1, vector<int>& arr2) {
        // Size of two given arrays
        int n1 = arr1.size(), n2 = arr2.size();
        int n = n1 + n2; // Total size

        // Required indices for median calculation
        int ind2 = n / 2;
        int ind1 = ind2 - 1;
        int cnt = 0;
        int ind1el = -1, ind2el = -1;

        // Apply the merge step
        int i = 0, j = 0;
        while (i < n1 && j < n2) {
            if (arr1[i] < arr2[j]) {
                if (cnt == ind1) ind1el = arr1[i];
                if (cnt == ind2) ind2el = arr1[i];
                cnt++;
                i++;
            } else {
                if (cnt == ind1) ind1el = arr2[j];
                if (cnt == ind2) ind2el = arr2[j];
                cnt++;
                j++;
            }
        }

        // Copy the remaining elements
        while (i < n1) {
            if (cnt == ind1) ind1el = arr1[i];
            if (cnt == ind2) ind2el = arr1[i];
            cnt++;
            i++;
        }
        while (j < n2) {
            if (cnt == ind1) ind1el = arr2[j];
            if (cnt == ind2) ind2el = arr2[j];
            cnt++;
            j++;
        }

        // Find the median
        if (n % 2 == 1) {
            return (double) ind2el;
        }

        return (double) ((double) (ind1el + ind2el)) / 2.0;
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
