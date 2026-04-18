#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int upperBound(vector<int> &nums, int x)
    {

        int low = 0;

        int high = nums.size() - 1;

        int ans = nums.size();

        while (low <= high)
        {

            int mid = (low + high) / 2;

            if (nums[mid] > x)
            {

                ans = mid;

                high = mid - 1;
            }

            else
            {

                low = mid + 1;
            }
        }

        return ans;
    }
};

int main()
{

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int x;
    cin >> x;

    Solution sol;

    cout << sol.upperBound(nums, x);

    return 0;
}

/* using STL fn to find upper bound
int upperBound(vector<int> &nums, int x){

     int up=upper_bound(nums.begin(),nums.end(),x)-nums.begin();
     return up;
    } */