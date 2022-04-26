// 6. Winner of an election

// { Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        vector <string> v;
        unordered_map <string, int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        
        string res;
        int max = INT_MIN;
        for(auto i : mp)
        {
            if(i.second > max)
            {
                max = i.second;
                res = i.first;
            }
            else if(i.second == max && i.first < res)
                res = i.first;
        }
        v.push_back(res);
        string t = to_string(max);
        v.push_back(t);
        return v;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}
  // } Driver Code Ends

