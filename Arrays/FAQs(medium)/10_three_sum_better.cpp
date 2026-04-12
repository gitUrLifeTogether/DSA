#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        set<vector<int>> tripletSet;

        int n = nums.size();

        for(int i = 0; i < n; i++) {

            set<int> hashset;

            for(int j = i + 1; j < n; j++) {

                int third = -(nums[i] + nums[j]);

                if(hashset.find(third) != hashset.end()) {

                    vector<int> temp = {nums[i], nums[j], third};

                    sort(temp.begin(), temp.end());

                    tripletSet.insert(temp);
                }

                hashset.insert(nums[j]);
            }
        }

        vector<vector<int>> ans(tripletSet.begin(), tripletSet.end());

        return ans;
    }
};

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    Solution sol;

    vector<vector<int>> ans = sol.threeSum(nums);

    for(auto &triplet : ans) {
        for(auto &x : triplet)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}