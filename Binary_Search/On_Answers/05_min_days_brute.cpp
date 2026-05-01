#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    /* Function to check if it's possible to make
    m bouquets with k flowers each on day */
    bool possible(vector<int> &nums, int day, int m, int k) {
        int n = nums.size(); 
        
        // Count of flowers bloomed
        int cnt = 0; 
        
        // Count of bouquets formed
        int noOfB = 0; 

        // Count number of bouquets that can be formed
        for (int i = 0; i < n; i++) {
            if (nums[i] <= day) {
                // Increment flower count
                cnt++; 
            } else {
                /* Calculate number of bouquets
                formed with flowers <= day */
                noOfB += (cnt / k);
                
                // Reset flower count
                cnt = 0; 
            }
        }
        // Add remaining flowers as a bouquet
        noOfB += (cnt / k); 

        /* Return true if enough 
        bouquets can be formed */
        return noOfB >= m; 
    }
public:
    /* Function to find the earliest day to
    make m bouquets of k flowers each */
    int roseGarden(int n, vector<int> nums, int k, int m) {
        
        /* Calculate the minimum 
        number of flowers required*/
        long long val = m * 1ll * k * 1ll; 
        
        /* Impossible case: not enough 
        flowers to make m bouquets*/
        if (val > n) return -1; 
        
        /* Find maximum and minimum
        bloom days in the array */
        int mini = INT_MAX, maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            mini = min(mini, nums[i]); 
            maxi = max(maxi, nums[i]); 
        }

        /* Linear search to find the
        earliest day to make m bouquets */
        for (int i = mini; i <= maxi; i++) {
            if (possible(nums, i, m, k))
                return i;
        }
        
        // Return-1 if no such day exists
        return -1; 
    }
};

int main() {
    vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7}; 
    
    int n = arr.size();
    
    // Number of flowers per bouquet
    int k = 3; 
    
    // Number of bouquets needed
    int m = 2; 

    // Create an instance of the Solution class
    Solution sol; 
    
    int ans = sol.roseGarden(n, arr, k, m); 

    if (ans == -1) {
        cout << "We cannot make m bouquets.\n"; 
    } else {
        cout << "We can make bouquets on day " << ans << "\n"; 
    }

    return 0; 
}
