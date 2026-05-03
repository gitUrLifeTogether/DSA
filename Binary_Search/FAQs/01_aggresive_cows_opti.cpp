#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    /* Function to check if we can place 'cows' cows
    with at least 'dist' distance apart in 'stalls' */
    bool canWePlace(vector<int> &nums, int dist, int cows) {
        
        // Size of array
        int n = nums.size(); 
        
        // Number of cows placed
        int cntCows = 1; 
        
        // Position of last placed cow
        int last = nums[0]; 
        
        for (int i = 1; i < n; i++) {
            if (nums[i] - last >= dist) {
                
                // Place next cow
                cntCows++; 
                
                // Update the last location
                last = nums[i]; 
            }
            if (cntCows >= cows) return true;
        }
        return false;
    }

public:
    /* Function to find the maximum possible minimum
    distance 'k' cows can have between them in 'stalls' */
    int aggressiveCows(vector<int> &nums, int k) {
        
        // Size of array
        int n = nums.size(); 
        // Sort the nums
        sort(nums.begin(), nums.end());
        
        int low = 1, high = nums[n - 1] - nums[0];

        //Apply binary search:
        while (low <= high) {
            int mid = (low + high) / 2;
            if (canWePlace(nums, mid, k) == true) {
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return high;
    }
};

int main() {
    vector<int> nums = {0, 3, 4, 7, 10, 9};
    int k = 4;

    // Create an instance of the Solution class
    Solution sol;

    int ans = sol.aggressiveCows(nums, k);

    // Output the result
    cout << "The maximum possible minimum distance is: " << ans << "\n";

    return 0;
}
