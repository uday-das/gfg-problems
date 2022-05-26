// Check Palindrome

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    bool helper(string n , int start , int end)
    {
       if(start >= end)
            return true;
       else
            return ( n[start] == n[end]  &&  helper(n,start+1,end-1));
    }
    
    bool isPalin(int N)
    {
       string n = to_string(N);             //convert the integer to string 
       int start=0,end=n.length()-1;
       return helper(n,start,end);
    }
        
};

// { Driver Code Starts.

int main() {
	int T;
	cin>>T;
	while(T--) 
	{
	    int N;
	    cin>>N;
	    Solution obj;
	    cout<<obj.isPalin(N)<<endl;
	}
	return 0;
}  // } Driver Code Ends