// 2. Check if Arrays are Permutations 

// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//Complete this function
bool isArr2PermutationOfArr1(int arr1[],int arr2[],int n)
{
    return is_permutation(arr1, arr1 + n, arr2);
}

// { Driver Code Starts.


int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr1[n];
        
        for(int i=0;i<n;i++)
        cin>>arr1[i];
        
        int arr2[n];
        
        for(int i=0;i<n;i++)
        cin>>arr2[i];
        
        
        cout<<isArr2PermutationOfArr1(arr1,arr2,n);
        cout<<endl;
    }
    
	return 0;
}  // } Driver Code Ends