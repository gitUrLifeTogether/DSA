#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    /* Function to calculate power using
    exponentiation by squaring method*/
    long long Pow(int b, int exp) {
        long long ans = 1;
        long long base = b;
        
        // Exponentiation by squaring method
        while (exp > 0) {
            if (exp % 2) {
                exp--;
                ans = ans * base;
            } else {
                exp /= 2;
                base = base * base;
            }
        }
        return ans;
    }
public:
    /* Function to find the nth root
    of m using linear search*/
    int NthRoot(int N, int M) {
        // Linear search on the answer space
        for (int i = 1; i <= M; i++) {
            long long val = Pow(i, N);
            
            /* Check if the computed
            value is equal to M */
            if (val == M * 1ll) {
                // Return the root value
                return i; 
            } else if (val > M * 1ll) {
                break;
            }
        }
        // Return -1 if no root found
        return -1; 
    }
};

int main() {
    int n = 3, m = 27;
    
    // Create an object of the Solution class
    Solution sol;
    
    int ans = sol.NthRoot(n, m);
    
    // Print the result
    cout << "The answer is: " << ans << "\n";
    
    return 0;
}
