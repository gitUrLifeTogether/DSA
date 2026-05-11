#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    /* Function to minimize the maximum
    distance between gas stations */
    double minimiseMaxDistance(vector<int>& arr, int k) {
        
        int n = arr.size(); 
        
        /* Array to store how many gas 
        stations are placed in each section*/
        vector<int> howMany(n - 1, 0); 

        // Place k gas stations
        for (int gasStations = 1; gasStations <= k; gasStations++) {
            double maxSection = -1;
            int maxInd = -1;

            /* Find the maximum section 
            and insert the gas station*/
            for (int i = 0; i < n - 1; i++) {
                double diff = arr[i + 1] - arr[i];
                double sectionLength = diff / (howMany[i] + 1);
                
                /* Update the maximum section
                length and its index */
                if (sectionLength > maxSection) {
                    maxSection = sectionLength;
                    maxInd = i;
                }
            }
            
            /* Insert the current gas 
            station into the section */
            howMany[maxInd]++;
        }

        // Find the maximum distance (answer)
        double maxAns = -1;
        for (int i = 0; i < n - 1; i++) {
            double diff = arr[i + 1] - arr[i];
            double sectionLength = diff / (howMany[i] + 1);
            maxAns = max(maxAns, sectionLength);
        }

        return maxAns;
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;

    // Create an instance of the Solution class
    Solution sol;

    // Call the minimiseMaxDistance method and print the result
    long double ans = sol.minimiseMaxDistance(arr, k);
    cout << "The answer is: " << ans << "\n";

    return 0;
}
