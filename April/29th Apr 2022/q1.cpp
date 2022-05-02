// 1. Vector Accumulate

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends 
//User function Template for C++

//Complete this function

int vAccu(vector<int>v, int n)
{
    int sum = 0;
    sum = accumulate(v.begin(), v.end(), sum);
    return sum;
}

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	   vector<int>v;
	   for(int i=0;i<n;i++)
	   {
	       int x;
	       cin>>x;
	       v.push_back(x);
	   }
	   
	   cout<<vAccu(v,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends
