// 3. Pattern searching 

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

/*
str: string in which pattern we have to find pattern.
text: pattern needs to searched.
*/

bool searchPattern(string str, string pat)
{
    int pos = str.find(pat);
    if(pos != string :: npos)
        return true;
    else
        return false;
}



// { Driver Code Starts.
int main()
{
    int t; cin>>t;
    
    while(t--)
    {
        string str, pat;
        cin>>str;
        cin>>pat;
        
        if(searchPattern(str, pat) == true)
            cout << "Present" <<endl;
        else cout << "Not present" <<endl;
    }
}

  // } Driver Code Ends