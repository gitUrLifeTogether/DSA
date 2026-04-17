#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {

        int n = nums.size();

        int maxFreq = 0;

        int minFreq = n;

        vector<bool> visited(n, false);

        for(int i = 0; i < n; i++) {

            if(visited[i]) continue;

            int freq = 0;

            for(int j = i; j < n; j++) {

                if(nums[i] == nums[j]) {

                    freq++;

                    visited[j] = true;
                }
            }

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