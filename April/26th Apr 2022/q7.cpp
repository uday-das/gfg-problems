// 7. New Registration System

// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

vector<string> login_system(vector<string> v)
{
    vector <string> vec;
    unordered_map <string, int> mp;
    for(auto i : v)
    {
        mp[i]++;                // mp[i] --> mp[v[i]];
        if(mp[i] == 1)          // freq = 1
            vec.push_back(i);
        else                    //  freq > 1
        {
            vec.push_back(i + to_string(mp[i] - 1));        // appending...
        }
    }
    return vec;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string>v;
        for(int i=0;i<n;i++)
        {
            string k;
            cin>>k;
            v.push_back(k);
        }
        vector<string>ans=login_system(v);
        for(auto i:ans)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends