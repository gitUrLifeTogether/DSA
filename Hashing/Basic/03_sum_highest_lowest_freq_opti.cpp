#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {

        unordered_map<int,int> mpp;

        for(int x : nums)
            mpp[x]++;

        int maxFreq = INT_MIN;

        int minFreq = INT_MAX;

        for(auto it : mpp) {

            int freq = it.second;

            maxFreq = max(maxFreq, freq);

            minFreq = min(minFreq, freq);
        }

        return maxFreq + minFreq;
    }
};

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    Solution sol;

    cout << sol.sumHighestAndLowestFrequency(nums);

    return 0;
}