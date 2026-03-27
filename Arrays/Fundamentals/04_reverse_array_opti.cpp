#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverse(int arr[], int n) {
        int p1 = 0, p2 = n - 1;
        while (p1 < p2) {
            int tmp = arr[p1];
            arr[p1] = arr[p2];
            arr[p2] = tmp;
            p1++;
            p2--;
        }
        return;
    }
};

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 5;
    int arr[] = {5, 4, 3, 2, 1};
    Solution solution;
    cout << "Original array: ";
    printArray(arr, n);
    solution.reverse(arr, n);
    cout << "Reversed array: ";
    printArray(arr, n);
    return 0;
}