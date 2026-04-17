#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size() == 0)
            return 0;

        unordered_set<int> st(nums.begin(), nums.end());

        int longest = 1;

        for(auto x : st) {

            if(st.find(x - 1) == st.end()) {

                int cnt = 1;

                int current = x;

                while(st.find(current + 1) != st.end()) {

                    current++;

                    cnt++;
                }

                longest = max(longest, cnt);
            }
        }

        return longest;
    }
};

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    Solution sol;

    cout << sol.longestConsecutive(nums);

    return 0;
}