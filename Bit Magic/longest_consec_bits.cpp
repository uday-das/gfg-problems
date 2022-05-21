// Longest Consecutive 1's 

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*/
class Solution
{
    public:
    int maxConsecutiveOnes(int n)
    {
        int res = 0;
        int max_consec = 0;
        while(n > 0)
        {
            if(n % 2 != 0)              // if true then last bit is 1 
            {
                res++;
                max_consec = max(res, max_consec);      // everytime decide which is maximum among two
            }
            else
            {
                res = 0;
            }
            n = n >> 1;
        }
        return max_consec;
    }
};


// { Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		//calling maxConsecutiveOnes() function
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}  // } Driver Code Ends