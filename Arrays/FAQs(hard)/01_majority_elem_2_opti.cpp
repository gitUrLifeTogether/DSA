#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElementTwo(vector<int>& nums) {

        int n = nums.size();

        int cnt1 = 0, cnt2 = 0;

        int el1 = INT_MIN, el2 = INT_MIN;

        for(int i = 0; i < n; i++) {

            if(cnt1 == 0 && nums[i] != el2) {

                el1 = nums[i];
                cnt1 = 1;
            }

            else if(cnt2 == 0 && nums[i] != el1) {

                el2 = nums[i];
                cnt2 = 1;
            }

            else if(nums[i] == el1)
                cnt1++;

            else if(nums[i] == el2)
                cnt2++;

            else {

                cnt1--;
                cnt2--;
            }
        }

        cnt1 = 0;
        cnt2 = 0;

        for(int x : nums) {

            if(x == el1)
                cnt1++;

            if(x == el2)
                cnt2++;
        }

        vector<int> ans;

        if(cnt1 > n / 3)
            ans.push_back(el1);

        if(cnt2 > n / 3)
            ans.push_back(el2);

        return ans;
    }
};

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    Solution sol;

    vector<int> ans =
    sol.majorityElementTwo(arr);

    for(int x : ans)
        cout << x << " ";

    return 0;
}