#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:

    int lowerBound(vector<int> &nums, int target) {
        int low = 0, high = nums.size() - 1;
        int ans = nums.size(); 
        while(low <= high) {
            int mid = (low + high) / 2;

            if(nums[mid] >= target) {
                ans = mid;  
                high = mid - 1;  
            }

            else {
                low = mid + 1; 
            }
        }
        return ans;
    }

    int upperBound(vector<int> &nums, int target) {
        int low = 0, high = nums.size() - 1;
        int ans = nums.size();  

        while(low <= high) {
            int mid = (low + high) / 2;

            if(nums[mid] > target) {
                ans = mid;  
                high = mid - 1;  
            } 
            else {
                low = mid + 1;
            }
        }
        return ans;
    }

public:
    vector<int> searchRange(vector<int> &nums, int target) {

        int firstOcc = lowerBound(nums, target);  

        if(firstOcc == nums.size() || nums[firstOcc] != target) return {-1, -1}; 

        int lastOcc = upperBound(nums, target) - 1;  
        
        return {firstOcc, lastOcc};  
    }
};

int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;


    Solution sol;

    vector<int> result = sol.searchRange(nums, target);

    cout << "The first and last occurrences are at indices: " 
         << result[0] << " and " << result[1] << "\n";

    return 0;
}