// Multiplication Under Modulo

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int multiplicationUnderModulo(long long a, long long b)
        {
            // (a * b) % c = (a % c * b % c) % c
            return ((a % 1000000007) * (b % 1000000007)) % 1000000007;
        }
};

// { Driver Code Starts.
int main() {
	int T;
	
	//taking testcases
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    
	    //taking input a and b
	    cin>>a>>b;
	    Solution ob;
	    //calling multiplicationUnderModulo() function
	    cout<<ob.multiplicationUnderModulo(a,b)<<endl;
	}
	return 0;
}  // } Driver Code Ends