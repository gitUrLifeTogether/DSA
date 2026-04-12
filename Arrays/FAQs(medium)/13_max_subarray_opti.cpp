#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        long long sum = 0;

        long long maxi = LLONG_MIN;

        for(int i = 0; i < nums.size(); i++) {

            sum += nums[i];

            maxi = max(maxi, sum);

            if(sum < 0)
                sum = 0;
        }

        return maxi;
    }
};

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    Solution sol;

    cout << sol.maxSubArray(arr);

    return 0;
}