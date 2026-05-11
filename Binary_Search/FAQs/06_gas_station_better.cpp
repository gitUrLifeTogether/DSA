#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    /* Function to minimize the maximum
    distance between gas stations*/
    long double minimiseMaxDistance(vector<int> &arr, int k) {
        int n = arr.size(); 
        
        /* Array to store how many gas 
        stations are placed in each section*/
        vector<int> howMany(n - 1, 0); 
        
        /* Max heap to store sections by
        their current maximum distance*/
        priority_queue<pair<long double, int>> pq; 

        /* Insert first n-1 elements into priority
        queue with respective distance values*/
        for (int i = 0; i < n - 1; i++) {
            pq.push({(long double)(arr[i + 1] - arr[i]), i});
        }

        for (int gasStations = 1; gasStations <= k; gasStations++) {
            /* Find the maximum section 
            and insert the gas station*/
            auto tp = pq.top(); 
            pq.pop(); 
            
            // Index of the section
            int secInd = tp.second; 

            // Insert current gas station into section
            howMany[secInd]++;

            /* Calculate the initial difference
            between adjacent gas stations*/
            long double inidiff = (long double)(arr[secInd + 1] - arr[secInd]);

            /* Calculate the new section length 
            after inserting another gas station*/
            long double newSecLen = inidiff / (long double)(howMany[secInd] + 1);

            /* Push the updated section 
            back into the priority queue*/
            pq.push({newSecLen, secInd});
        }
        /* Return the maximum distance in
        the top section of the heap*/
        return pq.top().first; 
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
