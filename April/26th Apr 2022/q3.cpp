// 3. Find element in vector using find 

// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//Complete this function

bool vExists(vector<int> v, int x)
{
    for(int i = 0; i < v.size(); i++)
    {
        auto it = find(v.begin(), v.end(), x);
        if(it == v.end())
            return false;
        else
            return true;
    }
}

// { Driver Code Starts.



int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	   vector<int> v;
	   for(int i = 0; i < n;i++)
	   {
	       int x;
	       cin>>x;
	       v.push_back(x);
	   }
	   
	   int x;
	   cin>>x;
	   
	   cout<<vExists(v,x)<<endl;
	   
	   
	}
	return 0;
}  // } Driver Code Ends