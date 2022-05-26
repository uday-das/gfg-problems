// GCD Euclid

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int GCD(int a, int b)
    {
        if (a == 0)
            return b;
        return GCD(b % a, a);
    }
};

// { Driver Code Starts.
int main() {
	int T;
	cin>>T;
	while(T--) 
	{
	    int a,b;
	    cin>>a>>b;
	    Solution ob;
	    cout<<ob.GCD(a,b)<<endl;
	}
	return 0;
}  // } Driver Code Ends