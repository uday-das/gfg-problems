// Max and Second Max

// Initial Template for C++

// CPP code to find largest and
// second largest element in the array

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[])
    {
        int max = arr[0], max2 = -1;
        vector<int> v;

        for (int i = 1; i < sizeOfArray; i++)
        {
            if (arr[i] > max)
                max = arr[i];
        }
        v.push_back(max);

        for (int j = 0; j < sizeOfArray; j++)
        {
            if (arr[j] != max)
            {
                if (arr[j] > max2)
                    max2 = arr[j];
            }
        }

        v.push_back(max2);
        return v;
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{

    // Testcase input
    int testcases;
    cin >> testcases;

    // Looping through all testcases
    while (testcases--)
    {
        int sizeOfArray;
        cin >> sizeOfArray;

        int arr[sizeOfArray];

        // Array input
        for (int index = 0; index < sizeOfArray; index++)
        {
            cin >> arr[index];
        }
        Solution obj;
        vector<int> ans = obj.largestAndSecondLargest(sizeOfArray, arr);
        cout << ans[0] << ' ' << ans[1] << endl;
    }

    return 0;
} // } Driver Code Ends