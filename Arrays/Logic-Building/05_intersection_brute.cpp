#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        vector<int> visited(nums2.size(), 0);
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j] && visited[j] == 0) {
                    ans.push_back(nums2[j]);
                    visited[j] = 1;
                    break;
                }
                else if (nums2[j] > nums1[i])
                    break;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> nums1 = {1, 2, 3, 3, 4, 5, 6, 7};
    vector<int> nums2 = {3, 3, 4, 4, 5, 8};
    Solution finder;
    vector<int> ans = finder.intersectionArray(nums1, nums2);
    cout << "Intersection of nums1 and nums2 is:" << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}