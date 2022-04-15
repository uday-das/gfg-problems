// 1. Stock span problem

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to calculate the span of stock's price for all n days.
    vector<int> calculateSpan(int price[], int n)
    {
        vector<int> v;
        stack <int> s;
        v.push_back(1);
        s.push(0);
        for(int i = 1; i < n; i++)
        {
            while(!s.empty() && price[s.top()] <= price[i])
                s.pop();
            if(s.empty())
                v.push_back(i + 1);
            else
                v.push_back(i - s.top());
            s.push(i);
        }
        return v;
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
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends
