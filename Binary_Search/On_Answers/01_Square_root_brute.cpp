#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    /* Function to compute the floor of square root
       of a given integer */
    int floorSqrt(int n) {
        int ans = 0;
        
        // Linear search in the answer space
        for (int i = 1; i <= n; i++) {
            long long val = 1LL*i*i;
            // Check if val is less than or equal to n
            if (val <= (long long)n) {
                ans = i; // Update ans to current value of i
            } else {
                break; // Exit loop if val exceeds n
            }
        }
        
        // Return the computed floor of square root
        return ans;
    }
};

int main() {
    int n = 28;
    
    // Create an object of the Solution class
    Solution sol;
    
    int ans = sol.floorSqrt(n);
    
    // Print the result
    cout << "The floor of square root of " << n
         << " is: " << ans << "\n";
    
    return 0;
}
