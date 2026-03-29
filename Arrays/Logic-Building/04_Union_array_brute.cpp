#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;
        vector<int> Union;
        for (int num : nums1) {
            s.insert(num);
        }
        for (int num : nums2) {
            s.insert(num);
        }
        for (int num : s) {
            Union.push_back(num);
        }
        return Union;
    }
};

int main() {
    vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> nums2 = {2, 3, 4, 4, 5, 11, 12};
    Solution finder;
    vector<int> Union = finder.unionArray(nums1, nums2);
    cout << "Union of nums1 and nums2 is:" << endl;
    for (int val : Union) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}