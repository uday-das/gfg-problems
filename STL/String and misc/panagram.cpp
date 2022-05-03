// Panagram Checking

// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    bool isPanagram(string st)
    {
        int arr[27] = {0};
        
        for(int i = 0; i < st.length(); i++)
        {
            if(st[i] >= 65 && st[i] <= 90)
                arr[st[i]-64]++;
            else
                arr[st[i]-96]++;
        }
        for(int i = 1; i <= 26; i++)
        {
            if(arr[i] == 0)
                return false;
        }
        return true;
    }
    
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	Solution obj;
	cout << obj.isPanagram(s) << endl;
	}
	
	return 0;
	
}

  // } Driver Code Ends