// Rightmost different bit

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        if(m == n)
            return -1;
        int pos = 1;
        while(n >= 0 && m >= 0)
        {
            if(m % 2 != 0)              // last bit -->  1
            {
                if(n % 2 != 0)          // last bit -->  1
                {   
                    n = n/2;
                    m = m/2;
                    pos++;
                }
                else
                {
                    break;
                }
            }
            else if(m % 2 == 0)         // last bit -->  0
            {
                if(n % 2 == 0)          // last bit -->  0
                {   
                    n = n/2;
                    m = m/2;
                    pos++;
                }
                else
                {
                    break;
                }
            }
        }
        return pos;
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
}   // } Driver Code Ends