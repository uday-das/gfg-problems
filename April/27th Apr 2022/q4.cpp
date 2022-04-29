// 4. Vector min_element

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function Template for C++

//Complete this function
int vMin(vector<int>v, int n)
{
    auto it = min_element(v.begin(), v.end());
    return *it;
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
	   
	   cout<<vMin(v,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends