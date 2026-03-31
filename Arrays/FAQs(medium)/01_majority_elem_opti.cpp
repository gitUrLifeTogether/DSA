#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int el = 0;
        for(int i = 0; i < nums.size(); i++){
            if(cnt == 0){
                cnt = 1;
                el = nums[i];
            }
            else if(el == nums[i]) cnt++;
            else cnt--;
        }
        int cnt1 = 0;
        for(int i = 0; i < nums.size(); i++){
            if(el == nums[i])
                cnt1++;
        }
        if(cnt1 > (nums.size()/2)) return el;
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