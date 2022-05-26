// Permutations of a String

// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void find(string s, string temp, vector <string> &v)
    {
        if(s.length() == 0)
        {
            v.push_back(temp);
        }
        for(int i = 0; i < s.length(); i++)
        {
            find(s.substr(0, i) + s.substr(i+1), temp + s[i], v);
        }
    }
    
    vector<string> permute(string s)
    {
        vector <string> str;
        string t;
        find(s, t, str);
        return str;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution obj;
		vector<string> ans;
		ans = obj.permute(s);
		sort(ans.begin(), ans.end());
		for(auto x: ans)
		    cout << x << " ";
		
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends