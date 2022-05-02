// 5. Search in Vector 

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//Complete this function
bool BinarySearch(vector<int> vec, int K)
{
    auto it = find(vec.begin(), vec.end(), K);
    if(it != vec.end())
        return true;
    else
        return false;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int N, K;
        cin>>N>>K;
        
        vector<int> vec(N);
        for(int i = 0; i < N; i++)
        {
            int x;
            cin>>x;
            vec[i] = x;
        }
        
        cout << BinarySearch(vec, K) <<endl;
    }
}

  // } Driver Code Ends
