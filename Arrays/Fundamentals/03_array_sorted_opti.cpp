#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool arraySortedOrNot(int arr[], int n) {
        for (int i = 0; i < n - 1; i++) {
            if(arr[i] > arr[i+1]){
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution solution;
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    bool sorted = solution.arraySortedOrNot(arr, n);
    if (sorted) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }
    return 0;
}