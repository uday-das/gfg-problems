// Fibonacci Using Recursion

//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Complete this function
    int fibonacci(int n)
    {
        if(n <= 1)
        {
            return n;    
        }
        else
        {
            return fibonacci(n-2) + fibonacci(n-1);
        }
    }
};

// { Driver Code Starts.
int main() {
	int T;
	
	//taking total testcases
	cin>>T;
	while (T--)
	{
	    int n;
	    //taking number n
	    cin>>n;
	    Solution ob;
	    //calling fibonacci() function
	    cout<<ob.fibonacci(n)<<endl;
	    
	    
	}
	return 0;
}  // } Driver Code Ends