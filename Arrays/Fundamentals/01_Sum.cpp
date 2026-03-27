#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int sum(int arr[], int n) {
        int ans=0;
        for (int i=0;i<n;i++){
            ans+=arr[i];
        }
        return ans;
    }
};

int main() {
    int n = 4;
    int arr[] = {1, 2, 3, 8};
    Solution sol;
    int result = sol.sum(arr, n);
    cout << "The sum of array elements is: " << result << endl;
    return 0;
}