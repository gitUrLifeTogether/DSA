#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseArray(vector<int>& nums, int start, int end){
        while(start < end){
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverseArray(nums, 0, k-1);
        reverseArray(nums, k, n-1);
        reverseArray(nums, 0, n-1);
    }
};

void printArray(vector<int> nums) {
    for(int val : nums) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int k = 2;
    cout << "Initial array: ";
    printArray(nums);
    Solution sol;
    sol.rotateArray(nums, k);
    cout << "Array after rotating elements by " << k << " places: ";
    printArray(nums);
    return 0;
}