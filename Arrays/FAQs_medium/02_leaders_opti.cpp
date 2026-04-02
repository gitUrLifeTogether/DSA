#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int maxi = INT_MIN;
        for(int i = n-1; i >= 0; i--){
            if(maxi < nums[i]){
                ans.push_back(nums[i]);
                maxi = nums[i];
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    vector<int> nums = {10, 22, 12, 3, 0, 6};
    Solution finder;
    vector<int> ans = finder.leaders(nums);
    cout << "Leaders in the array are: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}