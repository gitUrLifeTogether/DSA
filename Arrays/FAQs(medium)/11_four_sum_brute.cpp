#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        int n = nums.size();

        set<vector<int>> st;

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                for(int k = j + 1; k < n; k++) {
                    for(int l = k + 1; l < n; l++) {

                        long long sum =
                        (long long)nums[i] +
                        nums[j] +
                        nums[k] +
                        nums[l];

                        if(sum == target) {

                            vector<int> temp =
                            {nums[i], nums[j], nums[k], nums[l]};

                            sort(temp.begin(), temp.end());

                            st.insert(temp);
                        }
                    }
                }
            }
        }

        return vector<vector<int>>(st.begin(), st.end());
    }
};

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    int target;
    cin >> target;

    Solution sol;

    vector<vector<int>> ans =
    sol.fourSum(nums, target);

    for(auto &quad : ans) {
        for(auto &x : quad)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}