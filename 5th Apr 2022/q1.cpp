// 1. Reverse String

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

// complete the function
// the function should return the reversed string
string reverseString(string s){
    for(int i = 0, j = s.length()-1; i <= j; i++, j--)
    {
        int temp;
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    return s;
    
    
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    string s; cin>>s;
        string reversed = reverseString(s);
        cout<<reversed<<endl;
	}
	
	return 0;
}  // } Driver Code Ends







