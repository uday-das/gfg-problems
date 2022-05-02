// 2. Rotate vector by K places

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

/*
vec: original vector
K: rotate vector by K places
*/
vector<int> leftRotate(vector<int> v, int K)
{
    rotate(v.begin(), v.begin() + K, v.end());
    return v;
}

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int N, K,val;
        cin>>N>>K;
        
        vector<int> vec(N);
        for(int i = 0; i < N; i++)
        {
            cin>>val;
            vec[i] = val;
        }
        
        vec = leftRotate(vec, K); 
        for(auto itr = vec.begin(); itr != vec.end(); itr++)
            cout << *itr << " ";
        cout <<endl;
        
        
    }
}

  // } Driver Code Ends
