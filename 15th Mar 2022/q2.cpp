// 2. Display Longest name

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    string longest(string names[], int n)
    {
        int max_len = 0, max_len_idx = 0;
        for(int i = 0; i < n; i++)
        {
            if(names[i].length() > max_len)
            {
                max_len = names[i].length();
                max_len_idx = i; 
            }
        }
        return names[max_len_idx];
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string names[n];
		
		for(int i=0;i<n;i++)
			cin>>names[i];
		Solution ob;
		cout<< ob.longest(names, n) << endl;
	}
}
  // } Driver Code Ends
