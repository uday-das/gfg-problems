// 1. Sort Vector of Pairs

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function Template for C++


//Complete this function
vector<pair<int,int>> sortBySecond(vector<pair<int,int>> v)
{
    vector<pair<int,int>> vec;
    for(int i = 0; i < v.size(); i++)
    {
        vec.push_back(v[i]);
    }
    sort(vec.begin(), vec.end(), greater <pair<int,int>>());
    return vec;
}


// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<pair<int,int>>v;
	    
	    for(int i=0;i<n;i++)
	    {
	        int a;
	        int h;
	        cin>>a>>h;
	        
	        v.push_back({a,h});
	    }
	    
	    
	    vector<pair<int,int>>temp = sortBySecond(v);
	    
	    for(int i=0;i<n;i++)
	    {
	        cout<<"("<<temp[i].first<<","<<temp[i].second<<") ";
	    }
	    
	    cout<<endl;
	}
	return 0;
}

  // } Driver Code Ends