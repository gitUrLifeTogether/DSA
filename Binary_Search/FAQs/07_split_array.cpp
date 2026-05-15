#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    /* Function to count partitions such 
    that each partition has sum <= maxSum*/
    int countPartitions(vector<int> &a, int maxSum) {
        int n = a.size();
        int partitions = 1;
        long long subarraySum = 0;

        for (int i = 0; i < n; i++) {
            if (subarraySum + a[i] <= maxSum) {
                // Add element to the current subarray
                subarraySum += a[i];
            } else {
                // Start a new subarray with current element
                partitions++;
                subarraySum = a[i];
            }
        }

        return partitions;
    }

public:
    /* Function to find the largest minimum
    subarray sum with at most k partitions*/
    int largestSubarraySumMinimized(vector<int> &a, int k) {
        
        // Initialize binary search boundaries
        int low = *max_element(a.begin(), a.end()); 
        int high = accumulate(a.begin(), a.end(), 0);

        // Apply binary search
        while (low <= high) {
            int mid = (low + high) / 2;
            int partitions = countPartitions(a, mid);

            if (partitions > k) {
                /*If partitions exceed k, increase 
                the minimum possible subarray sum*/
                low = mid + 1;
            } 
            else {
                /*If partitions are within k, try to
                minimize the subarray sum further*/
                high = mid - 1;
            }
        }

        /* After binary search, 'low' will 
        be the largest minimum subarray sum
        with at most k partitions*/
        return low;
    }
};

int main() {
    vector<int> a = {10, 20, 30, 40};
    int k = 2;

    // Create an instance of the Solution class
    Solution sol;

    int ans = sol.largestSubarraySumMinimized(a, k);
    cout << "The answer is: " << ans << "\n";
    return 0;
}
