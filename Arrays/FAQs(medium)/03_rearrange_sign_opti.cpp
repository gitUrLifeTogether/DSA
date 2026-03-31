#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        int posIndex = 0, negIndex = 1;
        for(int i = 0; i < n; i++){
            if(nums[i] > 0){
                ans[posIndex] = nums[i];
                posIndex += 2;
            }
            else{
                ans[negIndex] = nums[i];
                negIndex += 2;
            }
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