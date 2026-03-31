#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos, neg, ans;
        for(int i = 0; i < n; i++){
            if(nums[i] > 0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }
        for(int i = 0; i < pos.size(); i++){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        return ans;
    }
};

int main() {
    vector<int> A = {1, 2, -4, -5};
    Solution sol;
    vector<int> ans = sol.rearrangeArray(A);
    for (int num : ans) {
        cout << num << " ";
    }
    return 0;
}