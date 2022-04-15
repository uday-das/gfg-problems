// 2. Find one extra character

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

char extraChar(string s1, string s2)
{
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    for(int i = 0; i < s2.length(); i++)        
    {
        if(s1[i] != s2[i])
            return s2[i];
    }
    return s2[s2.length()];
}

// { Driver Code Starts.
    
int main() {
	
        int t;
        cin>>t;
        while(t--) {
            string s1,s2;
            cin>>s1;
            cin>>s2;
            cout<<extraChar(s1, s2)<<endl;
        }
}  // } Driver Code Ends



