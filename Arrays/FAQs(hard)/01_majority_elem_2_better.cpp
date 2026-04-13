#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElementTwo(vector<int>& nums) {

        int n = nums.size();

        unordered_map<int,int> mpp;

        vector<int> result;

        int mini = n / 3 + 1;

        for(int i = 0; i < n; i++) {

            mpp[nums[i]]++;

            if(mpp[nums[i]] == mini)
                result.push_back(nums[i]);

            if(result.size() == 2)
                break;
        }

        return result;
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