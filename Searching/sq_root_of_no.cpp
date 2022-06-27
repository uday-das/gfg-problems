// Square root of a number

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution
{
public:
    long long int floorSqrt(long long int x)
    {
        int low = 1, high = x;
        long long ans = -1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            int mSq = mid * mid;
            if (mSq == x)
                return mid;
            else if (mSq > x)
                high = mid - 1;
            else
            {
                low = mid + 1;
                ans = mid;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}
// } Driver Code Ends