// String Reversal 

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    }
}
// } Driver Code Ends


string reverseString(string s)
{
    unordered_map <char, int> mp;
    string st = "";
    for(int i = s.length()-1; i >= 0; i--)
    {
        mp[s[i]]++;
        if(s[i] != ' ' && mp[s[i]] == 1)
            st = st + s[i];
    }
    return st;
}

