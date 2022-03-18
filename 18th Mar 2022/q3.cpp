// 3. Sort one array according to another array

// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void sortArray(int a[], char b[], int n){
    pair <int, char> p[n];
    for(int i = 0; i < n; i++)
    {
        p[i].first = a[i];
        p[i].second = b[i];
    }
    sort(p, p + n);
    
    for(int i = 0; i < n; i++)
    {
        cout << p[i].second << " ";
    }
}


// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        
        char b[n];
        for(int i = 0;i < n; i++){
            cin>>b[i];
        }
        
        sortArray(a, b, n);
        
        
        cout<<"\n";
    }
}  // } Driver Code Ends
