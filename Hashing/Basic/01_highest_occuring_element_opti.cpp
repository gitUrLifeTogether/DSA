#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {

        unordered_map<int,int> mpp;

        int maxFreq = 0;

        int maxEle = INT_MAX;

        for(int x : nums)
            mpp[x]++;

        for(auto it : mpp) {

            int ele = it.first;

            int freq = it.second;

            if(freq > maxFreq) {

                maxFreq = freq;

                maxEle = ele;
            }

            else if(freq == maxFreq) {

                maxEle = min(maxEle, ele);
            }
        }

        return maxEle;
    }
};

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    Solution sol;

    cout << sol.mostFrequentElement(nums);

    return 0;
}