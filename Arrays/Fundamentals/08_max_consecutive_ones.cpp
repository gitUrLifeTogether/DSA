#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxOnes = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                count++;
                maxOnes = max(maxOnes, count);
            }
            else {
                count = 0;
            }
        }
        return maxOnes;
    }
};

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    Solution sol;
    int ans = sol.findMaxConsecutiveOnes(nums);
    cout << "The maximum consecutive 1's are " << ans << endl;
    return 0;
}