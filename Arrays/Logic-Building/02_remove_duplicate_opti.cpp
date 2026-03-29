#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 1;
        for(int i = 1; i < n; i++){
            if(nums[i] != nums[i-1]){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main() {
    vector<int> nums = {1, 1, 2, 2, 2, 3, 3};
    Solution solution;
    int k = solution.removeDuplicates(nums);
    cout << "The vector after removing duplicate elements is " << endl;
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}