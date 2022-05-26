// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Function to arrange all letters of a string in lexicographical
    // order using Counting Sort.
    int find_max(string arr)
    {
        int max = arr[0];
        for (int i = 0; i < arr.length(); i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        return max;
    }

    string countSort(string arr)
    {
        int max, i, j;
        max = find_max(arr);
        int *c;
        c = new int[max + 1];
        for (i = 0; i < max + 1; i++)
        {
            c[i] = 0;
        }

        for (i = 0; i < arr.length(); i++)
        {
            c[arr[i]]++;
        }

        i = 0, j = 0;
        while (j < max + 1)
        {
            if (c[j] > 0)
            {
                arr[i] = j;
                c[j]--;
                i++;
            }
            else
                j++;
        }
        return arr;
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
        string arr;
        cin >> arr;
        Solution obj;
        cout << obj.countSort(arr) << endl;
    }
    return 0;
}
// } Driver Code Ends