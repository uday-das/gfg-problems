// 2. Sum Unique Elements 

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// Back-end complete function Template for C++

class Solution
{
public:
    long unique_elements(vector<long> nums)
    {
        long sum = 0;
        unordered_map<long, long> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for (auto i : mp)
        {
            if (i.second == 1)
                sum += i.first;
        }
        return sum;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<long> v(n, 0LL);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        cout << obj.unique_elements(v) << endl;
    }
    return 0;
} // } Driver Code Ends
