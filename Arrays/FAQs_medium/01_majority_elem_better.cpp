#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for (int num : nums) {
            mp[num]++;
        }
        for (auto& pair : mp) {
            if (pair.second > n / 2) {
                return pair.first;
            }
        }
        return -1;
    }
};

int main() {
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    Solution sol;
    int ans = sol.majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}