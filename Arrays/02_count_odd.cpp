#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int countOdd(int arr[], int n){
        int count=0;
        for (int i=0;i<n;i++){
            if(arr[i]%2==1){
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution sol;
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = sol.countOdd(arr, n);
    cout << "Count of odd numbers: " << count << endl;
    return 0;
}