// 2. Remove from vector

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

/*
V: remove elements from this vector within range
start: starting position
end: end position
*/
void removeWithinRange(vector<int> &v, int start, int end)
{
    auto it1 = v.begin();
    auto it2 = v.begin();
    for(int i = 1; i <= start; i++)
    {
        it1++;
    }
    for(int i = 1; i <= end; i++)
    {
        it2++;
    }
    v.erase(it1, it2);
}

// { Driver Code Starts.
int main()
{
    int t; cin>> t;
    while(t--)
    {
        
        int n;
        cin>>n;
        
        vector<int> V(n);
        for(int i = 0; i  < n; i++)
         cin >> V[i];
        
        int start, end;
        cin>>start>>end;
        
        removeWithinRange(V, start, end);
        if(V.size() == 0)
            cout << "Empty" <<endl;
        else
        {
            for(auto itr = V.begin(); itr != V.end(); itr++)
                cout << *itr << " ";
            cout << endl;
        }
    }
}

  // } Driver Code Ends
